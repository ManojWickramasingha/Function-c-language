//returnnig pointer from function---
//----------
#include<stdio.h>

int * poin(int []);

int main()
{
    int *p;
    int arr[] ={1,2,3,4,5};
    p= poin(arr);
    printf("%d\n", *p);
}
int * poin(int arr[])
{
    arr +=2;
    return arr;
}