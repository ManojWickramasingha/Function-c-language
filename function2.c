//call by value method in the c lanugage--
//call reference---

//start call by value--
#include<stdio.h>

void fun1(int,int);
void fun(int*,int*);
int main()
{
    int x=5,y=7;
    fun1(x,y);
    //scop-----
    printf("\nprint  main the%d %d",x,y );//x=5,y=7
    fun(&x,&y);
    //scop-----
    printf("\nprint  main the%d %d",x,y );//x=5,y=7
    


}
void fun1(int x , int y)
{
    x=7;
    y=5;
    //copy x and y value---
    printf("\nvalue = %d %d", x,y);//x=7,y=5
}

//reference--- 


void fun(int *x , int *y)
{
    *x=7;
    *y=5;
    //copy x and y value---
    printf("\nvalue = %d %d", *x,*y);//x=7,y=5
}