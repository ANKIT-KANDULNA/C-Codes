#include <stdio.h>
int main()
{
    int start,end,j;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i=start; i<=end; i++) 
    {
        for (int j=2;end%j!=0;j++);
        {
            printf("%d\n",j);
        }
    }
    return 0;
}