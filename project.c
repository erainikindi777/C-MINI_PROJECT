#include <stdio.h>
#include <stdlib.h>

struct Student {
int id;
char name[50];
float grade;
};

void addStudent(struct Student students[], int *count) {
printf("Enter student ID: ");
scanf("%d", &students[*count].id);
printf("Enter student name: ");
scanf("%s", students[*count].name);
printf("Enter student grade: ");
scanf("%f", &students[*count].grade);
(*count)++;
printf("Student added successfully!\n");
}

void viewStudents(struct Student students[], int count) {
printf("Student Records:\n");
for (int i = 0; i < count; i++) {
printf("ID: %d, Name: %s, Grade: %.2f\n", students[i].id, students[i].name, students[i].grade);
}
}

int main() {

12 | Page

struct Student students[100];
int count = 0;
int choice;

while (1) {
printf("\nStudent Management System\n");
printf("1. Add Student\n");
printf("2. View Students\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice) {
case 1:
if (count < 100) {
addStudent(students, &count);
} else {
printf("Maximum number of students reached.\n");
}
break;
case 2:
viewStudents(students, count);
break;
case 3:
exit(0);
default:
printf("Invalid choice. Please try again.\n");
}
}
return 0;
}
