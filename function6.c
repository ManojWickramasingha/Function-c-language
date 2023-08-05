//function with argument with return type---
#include<stdio.h>

int fun(int , int);
int main()
{
    int x,y,c;
    printf("Enter number :\n");
    scanf("%d %d",&x,&y);
    c=fun(x,y);
    printf("%d", c);
}

int fun(int x, int y)
{
    return x+y;
}