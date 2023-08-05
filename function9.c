//passing string argument---
//----------------------
#include<stdio.h>

void modify(char[],char[]);

void main()
{
    char str1[] = "Jenny";
    char str2[] = "Kathri";

    modify(str1,str2);
}

void modify(char str1[], char str2[])
{
    int i,length=0;
    for(i=0;str1[i]!='\0';i++)
    {
        length += 1;
    }
    printf("length of str1 : %d",length);
    str2[i] = 'k';
    printf("\n%s %s", str1,str2);
}