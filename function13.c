//callback function---
//-------------

#include<stdio.h>

void main()
{
   char a[2] ={'sum','sub'};
    dis(&a[1]);

    
    
}

void sum(int a, int b)
{
    int s= a+b;
    printf("%d\n", s);
}
void sub(int a,int b)
{
    int s= a-b;
    printf("%d", s) ;
}
void track()
{
    printf("tracked");
}

void dis(void (*p)(int,int))
{
  
 return (*p)(8,5);
 
    
    
}