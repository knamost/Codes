#include <stdio.h>

struct Date {
  int day;
  int month;
  int year;
};

int compare_dates(struct Date date1, struct Date date2) {
  if (date1.year > date2.year) {
    return 1;
  } else if (date1.year < date2.year) {
    return -1;
  } else {
    if (date1.month > date2.month) {
      return 1;
    } else if (date1.month < date2.month) {
      return -1;
    } else {
      if (date1.day > date2.day) {
        return 1;
      } else if (date1.day < date2.day) {
        return -1;
      } else {
        return 0;
      }
    }
  }
}

int main() {
  struct Date date1 = {15, 8, 2023};
  struct Date date2 = {16, 8, 2023};

  int comparison_result = compare_dates(date1, date2);

  if (comparison_result == 1) {
    printf("date1 is later than date2\n");
  } else if (comparison_result == -1) {
    printf("date1 is earlier than date2\n");
  } else {
    printf("date1 and date2 are the same\n");
  }

  return 0;
}
