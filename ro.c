#include <stdio.h>
int main()
{
    int P,Q;
    printf("enter first number:");
    scanf("%d",&P);
    printf("enter second number:");
    scanf("%d",&Q);
    printf("Comparison(P==Q):%d\n",P==Q);
    printf("Not Equal to(P!=Q):%d\n",P!=Q);
    printf("Greater than(P>Q):%d\n",P>Q);
    printf("Less than(P<Q):%d\n",P<Q);
    printf("Greater than equal to(P>=Q):%d\n",P>=Q);
    printf("Less than(P<=Q):%d\n",P<=Q);
    return 0;
}