#include "common_header.h"
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("Digits are \n");
    while(num>0)
    { 
        int digit = num%10;
        //printf("%d ", digit);
        //printf("\n");
        num=num/10;
        for(int i=2;i<digit;i++)
        {
            int r=digit%i;
            if(r==0)
            exit(1);
        }
        printf("The prime numbers are %d\n",digit);
    }
    return 0;
}