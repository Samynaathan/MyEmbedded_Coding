#include <stdio.h>
#include "externfile.h" //here i include the file which is having the variable we r using in this file.

extern int a; //here i just declare the variable using extern keyword,
             //so compalier fetch the data from other file.
int main()
{
    int b=10;
    printf("%d",a+b);
    return 0;
}