#include "common_header.h"
int main()
{
    int i,n;
    printf("Enter the number ");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
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
    printf("size of ptr before realloc %lu \n ",sizeof(ptr));
    free(ptr);
    ptr==NULL;
   // ptr=(int*)realloc(ptr,10*sizeof(int));
    //printf("size of ptr after realloc %lu \n ",sizeof(ptr));
    
}
#include <stdio.h>
int main()
{
    int n1=0,n2=1,n3,n,i,f[50],j;
    int N1[50];
    int count;
    printf("Enter the number ");
    scanf("%d",&n);
    //printf("%d",n1);
    //printf("\n%d",n2);
    for(i=0;i<n;i++)
    {
        
        printf("\n%d",n3);
        for(j=0;j<n;j++)
        {
            n3=n1+n2;
            f[j]=n3;
         n1=n2;
        n2=n3;   
        }
        
    }
   /* printf("\n");
    printf("Enter the three numbers \n");
    for(i=0;i<3;i++)s
    {
        scanf("%d",&N1[i]);
    } */
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d",f[i]);
    }
    printf("%d",count);
    //return 0;
}