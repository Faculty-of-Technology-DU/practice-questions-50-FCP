#include <stdio.h>

typedef struct
{
  char name[30];
  int roll_number;
  double marks;
} student;

int comes_before(student first, student second) {
  if (first.marks != second.marks) {
    return first.marks > second.marks;
  }

  return first.roll_number < second.roll_number;
}

int main(void) {
  int count;
  student students[30];

  if (((scanf("%d", &count) != 1) || (count < 1)) || (count > 30)) {
    return 1;
  }

  for (int index = 0; index < count; index++) {
    if (((scanf("%29s %d %lf", students[index].name, &students[index].roll_number, &students[index].marks) != 3) || (students[index].marks < 0)) || (students[index].marks > 100)) {
      return 1;
    }
  }

  for (int left = 0; left < (count - 1); left++) {
    int best = left;

    for (int right = left + 1; right < count; right++) {
      if (comes_before(students[right], students[best])) {
        best = right;
      }
    }

    student temporary = students[left];
    students[left] = students[best];
    students[best] = temporary;
  }

  for (int index = 0; index < count; index++) {
    printf("%s %d %.2f\n", students[index].name, students[index].roll_number, students[index].marks);
  }

  return 0;
}
