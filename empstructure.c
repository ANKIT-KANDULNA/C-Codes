#include <stdio.h>
#include <string.h>
typedef struct emp
{
    char name[50];
    char doj[15];
    int salary;
}emp;
int main()
{
    emp emp1;
    printf("Enter name:");
    fgets(emp1.name,50,stdin);
    printf("Enter date of joining:");
    fgets(emp1.doj,15,stdin);
    printf("Enter salary:");
    scanf("%d",&emp1.salary);
    printf("\nEmployee Details:\n");
    printf("Name:%s",emp1.name);
    printf("Date of Joining:%s",emp1.doj);
    printf("Salary:%d",emp1.salary);
    return 0;
}