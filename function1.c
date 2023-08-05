#include<stdio.h>
void sum(int , int);
// void dived(int m+5, int n+5);
// void sid(int x+2, int 10);
int main()
{
    sum(2,3);
}
void sum(int x, int y)
{
    int a,b,sum=0,sum1=0;
    printf("Enter a & b\n");
    scanf("%d %d", &a,&b);
    sum = a+b;
    sum1=x+y;
    printf("sum =%d %d",sum, sum1);
    //void return enything--
}