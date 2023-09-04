#include "common_header.h"
int main()
{
    int a[10];
    int i,n;
    printf("Enter the no of digits\n");
    scanf("%d",&n);
    printf("Enter the number \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse order of given numbers \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[n-i-1]);
    }
    return 0;
}