#include "common_header.h"
unsigned int convert_binary(int a)
{
    int r,s=0;
    while(a>0)
    {
        r=a%2;
        s=(s*10)+r;
        a=a/2;
    }
    return s;
}
int main()
{
    int n;
    printf("Enter the number to find\n");
    scanf("%d",&n);
    int result=convert_binary(n);
    printf("Binary equalant for decimal number %d is %d ",n,result);
    return 0;
}