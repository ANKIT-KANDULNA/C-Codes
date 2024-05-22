#include <stdio.h>
struct box
{
    char name[25];
    float l,b,h;
};
float vol(struct box mybox)
{
    float v=mybox.l*mybox.b*mybox.h;
    return v;
}
int main()
{
    struct box Box;
    Box.l=2;
    Box.b=4;
    Box.h=1;
    printf("Printf volume of box is:%f",vol(Box));
    return 0;
}