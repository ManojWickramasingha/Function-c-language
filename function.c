#include<stdio.h>
//function-----
void Sum(int a, int b);
int main()
{
    char ch;
    char fun();
    ch = fun();
    printf("ch=%c", ch);
     Sum(2,3);//function call---
}
void Sum(int a, int b);//declaretion of function
void Sum(int x, int y)//function definition----
{
    // int a,b;
    int sum=0;
    // printf("Enter two number");
    // scanf("%d %d", &a,&b);
    sum = x+y;
    printf("\nsum= %d",sum);
}
// void Sum();//do not parse argument

char fun()
{
    char c;
    printf("enter a character\n");
    scanf("%c", &c);
    return c;
} 
