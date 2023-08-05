//No argument with return type--
//------------------------------
//----------------------------

#include<stdio.h>
//no argument best practice -void 
int fun(void);
char fun1(void);

int main()
{
    int s;
    int s1;
    s = fun();
    printf("\nsum of a and b : %d",s);
    s1 = fun1();
    printf("\nsum of a and b : %d",s1);

}
int fun()
{
    int a,b,sum=0;
//enter a and b value---
//----------------------
    printf("Enter a and b value:\n");
    scanf("%d %d",&a,&b);
    sum = a+b;
    return sum;
    //return after joump main function so ofter any code note executed--mch
    printf("hello");
}

char fun1()
{
    return 'a','b','c';
}