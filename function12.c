//function pointer---
//---------------------
#include<stdio.h>
int sum(int , int);

void main()
{
    int s=0,a=10,b=5;
    //need prathesess ptr point
    int (*ptr)(int,int)=&sum;
    s = (*ptr)(a,b);
    printf("%d", s);
}

int sum(int a,int b)
{
    return a+b;
}