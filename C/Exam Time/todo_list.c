#include <stdio.h>
#include <string.h>

#define MAX_TASKS 50

// Structure to represent a task
struct Task {
    char description[100];
    int isComplete;
};

// Function prototypes
void displayMenu();
void addTask(struct Task tasks[], int *numTasks);
void markComplete(struct Task tasks[], int numTasks);
void removeTask(struct Task tasks[], int *numTasks);

int main() {
    struct Task tasks[MAX_TASKS];
    int numTasks = 0;
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &numTasks);
                break;
            case 2:
                markComplete(tasks, numTasks);
                break;
            case 3:
                removeTask(tasks, &numTasks);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    printf("\n--- To-Do List ---\n");
    printf("1. Add a task\n");
    printf("2. Mark a task as complete\n");
    printf("3. Remove a task\n");
    printf("4. Exit\n");
}

void addTask(struct Task tasks[], int *numTasks) {
    if (*numTasks < MAX_TASKS) {
        printf("Enter task description: ");
        scanf(" %[^\n]", tasks[*numTasks].description);
        tasks[*numTasks].isComplete = 0; // Initialize as incomplete
        (*numTasks)++;
        printf("Task added successfully.\n");
    } else {
        printf("Maximum number of tasks reached.\n");
    }
}

void markComplete(struct Task tasks[], int numTasks) {
    if (numTasks > 0) {
        int index;
        printf("Enter the index of the task to mark as complete (1 to %d): ", numTasks);
        scanf("%d", &index);

        if (index >= 1 && index <= numTasks) {
            tasks[index - 1].isComplete = 1;
            printf("Task marked as complete.\n");
        } else {
            printf("Invalid index. Please enter a valid index.\n");
        }
    } else {
        printf("No tasks available to mark as complete.\n");
    }
}

void removeTask(struct Task tasks[], int *numTasks) {
    if (*numTasks > 0) {
        int index;
        printf("Enter the index of the task to remove (1 to %d): ", *numTasks);
        scanf("%d", &index);

        if (index >= 1 && index <= *numTasks) {
            // Move elements to fill the gap
            for (int i = index - 1; i < *numTasks - 1; i++) {
                strcpy(tasks[i].description, tasks[i + 1].description);
                tasks[i].isComplete = tasks[i + 1].isComplete;
            }

            (*numTasks)--;
            printf("Task removed successfully.\n");
        } else {
            printf("Invalid index. Please enter a valid index.\n");
        }
    } else {
        printf("No tasks available to remove.\n");
    }
}


