#include "common_header.h"
int main()
{
    int n;
    int count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        count++;
        }
    }
    if(count==0)
    printf("its prime\n");
    else
    printf("its not a prime\n");
    return 0;
}