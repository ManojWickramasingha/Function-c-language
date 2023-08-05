//with argument and without the return type--
//---------------------------

#include<stdio.h>
 void fun(int,int);
 int main()
 {  int x,y;
 printf("Enter value enter here\n");
 scanf("%d %d",&x,&y);
    fun(x,y);
 }

 void fun(int a, int b)
 {
    int sum=0;
    sum = a+b;
    printf("sum of value: %d",sum);
 }