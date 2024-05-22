#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollno;
    char name[50];
    float marks;
};
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}
void sortByMarks(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks > students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}
void sortByName(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}
void printStudents(struct Student students[], int n) {
    printf("Roll No\tName\t\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}
int main() {
    int n = 10;
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    sortByMarks(students, n);
    printf("\nSorted by Marks:\n");
    printStudents(students, n);
    sortByName(students, n);
    printf("\nSorted by Name:\n");
    printStudents(students, n);
    return 0;
}