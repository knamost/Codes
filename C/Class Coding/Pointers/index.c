/*
linked list:
. store address of first data then same thing goes for reamining datas.

*/

/*syntax of malloc
 int *ptr = (int*)malloc(size of(int));
*/



#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main(){
    int *head = (struct node*)malloc(sizeof(struct node));
    int *second = (struct node*)malloc(sizeof(struct node));
    int *third = (struct node*)malloc(sizeof(struct node));

    head->data = 3;
    head->data = second;
    head->data = 5;   


    head -> link = second;
    second -> link = third;
    third -> lik = NULL;


    while (temp != NULL){
        printf("%d\t", temp->data);
        temp = temp->link;
    }

    free(head);
    free(second);
    free(third);

    return 0;
}