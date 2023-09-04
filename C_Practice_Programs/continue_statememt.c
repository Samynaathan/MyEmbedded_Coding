#include "common_header.h"
int main()
{
    int count=0,sum=0,number;
    printf("Enter the 4 positive numbers \n");
    while(count<4)
    {
        scanf("%d",&number);
        if(number<0)
        {
            printf("Enter the positive number \n");
            continue;
        }
        sum+=number;
        count++;
    }
    printf("%d is the sum of given %d numbers",sum,number);
    return 0;
    
}