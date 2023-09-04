#include "common_header.h"
#include <ctype.h>
//int isalpha(int a);
int main()
{
    char s1[10]="shyam";
    int s2;
    s2=atoi(s1);
    if(isdigit(s2))
    printf("true\n");
    else
    printf("false");
}
