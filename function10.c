//return string from the function-
//------------------------------

#include<stdio.h>
  char * display();


int main()
{
    char *str;
    str = display();
    printf("%s", str);
    str[2] = 'l';
    printf("\n%s",str);
    
    // printf("\n%s", str);//manoj
}

 char * display()
{
    //static keyword global scope
   static char str[] = "manoj";
    return str;
    // return "manoj";
}