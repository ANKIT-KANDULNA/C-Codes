#include <stdio.h>
int main()
{
    int day;
    printf("Enter the day[1-7]:");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    
    default: 
        printf("Not a valid day!!");   
        break;
    }
}