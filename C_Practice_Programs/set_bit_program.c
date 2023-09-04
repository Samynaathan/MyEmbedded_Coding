#include "common_header.h"
#define bitpos 4
int main()
{
    int number,result;
    printf("Enter the number\n");
    scanf("%d",&number);
    result=number|(1<<bitpos);
    printf("0b%d\n",number);
    printf("0b%d\n",result);
}