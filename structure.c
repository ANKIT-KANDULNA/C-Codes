#include <stdio.h>
struct complex{
    int r,i;
};
struct complex add(struct complex c1,struct complex c2){
    struct complex ans;
    ans.r=c1.r+c2.r;
    ans.i=c1.i+c2.i;
    return ans;
}
int main(){
    struct complex c1,c2,c3;
    c1.r=4;
    c1.i=6;
    c2.r=5;
    c2.i=3;
    c3=add(c1,c2);
    printf("%d + %di",c3.r,c3.i);
    return 0;
}