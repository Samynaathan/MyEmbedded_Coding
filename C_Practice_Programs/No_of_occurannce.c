#include <stdio.h>
#include "common_header.h"
#define N 5

int main()
{
    int i,key,count=0;
    char s[N]; 
    printf("Enter the numbers");
    for(i=0;i<N;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("Enter the key number to find\n");
    scanf("%d",&key);
    for(i=0;i<N;i++)
    {
        if(s[i]==key)
        count++;
    }
    printf("No of occurrence of %d is %d times \n",key,count);
    return 0;
}