#include "common_header.h"
int main()
{
struct bmi
{
    char name[50];
    float weight;
    float height;
}s1[1000];
    int n,count=0; 
    printf("Enter the no of Entities \n");
    scanf("%d",&n);
    printf("Name  Height  Weight    \n");
    while(count<n)
    {
        for(int i=0;i<n;i++)
        {
            //float bmi;
            scanf("%c   %f  %f\n",&s1[i].name,&s1[i].weight,&s1[i].height);
            printf("\n");
            //bmi=(s1[i].weight)/((s1[i].height)*(s1[i].height));
            //printf("%f",bmi);
            count++;
        }
        printf("Name  Height  Weight    \n");
        for(int i=0;i<n;i++)
        {
            //float bmi;
            printf("%c   %f  %f\n",s1[i].name,s1[i].weight,s1[i].height);
            printf("\n");
            //bmi=(s1[i].weight)/((s1[i].height)*(s1[i].height));
            //printf("%f",bmi);
            
        }

    }
}