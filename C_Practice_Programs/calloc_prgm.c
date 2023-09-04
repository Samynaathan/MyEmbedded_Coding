#include "common_header.h"
int main()
{
    int i,n;
    printf("Enter the number ");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
    printf("DMA is not created \n");
    }
    else
    {
      printf("DMA is created \n");
    }
    printf("Enter the integers \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d \n",*(ptr+i));
    }
    printf("size of ptr before realloc %lu ",sizeof(ptr));
    ptr=(int*)realloc(ptr,20);
    printf("size of ptr after realloc %lu ",sizeof(ptr));
}