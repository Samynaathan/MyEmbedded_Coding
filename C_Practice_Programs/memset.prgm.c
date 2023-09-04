#include "common_header.h"
int main()
{
    char str[50];
    strcpy(str,"This is strin.h library function\n");
    puts(str);
    memset(str,'$',7);
    puts(str);
    return 0;
}