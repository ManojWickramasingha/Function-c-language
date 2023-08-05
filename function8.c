//passing array as an argument--
//-----------------------------

#include<stdio.h>
int fun(int [],int);
int main()
{
    int avg;
    int marks[5] ={25,33,45,67,88},a =sizeof(marks)/sizeof(marks[0]);
    avg =fun(marks,a);
    printf("\naverage: %d", avg);
    //size=20bytes
    printf("\nmain function array size is : %d", sizeof(marks));
    
}
int fun(int marks[],int a)
{
    int sum=0,avg=0,i;
    for(i=0;i<a;i++)
    {
        sum += marks[i];
    }
    avg = sum/a;
    //size = 4;
     printf("\nfun function array size is : %d", sizeof(marks));
    return avg;
}