#include "common_header.h"
int main()
{
    int n;
    float result;
    printf("Enter the given number\n");
    scanf("%d",&n);
    while(n>0)
    {
        result=sqrt(n);
        printf("square root of given number %f\n",result);
        exit(1);
    }
    printf("Entered number is undifined\n");
    return 0;
}