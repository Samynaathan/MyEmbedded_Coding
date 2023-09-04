#include "common_header.h"
int Find_the_pthfactor(int n,int p);

int Find_the_pthfactor(int n,int p)
{
    int pth_factor=-1;
    int count=0;
    for(int i=1;i<=n;i++)
    {
     if(n%i==0)
     {
        count++;
        if(count==p)
        {
            pth_factor=i;
            break;
        }
     }   
    }
    return pth_factor;
} 
int main()
{
    int n,p;
    printf("Enter the number to find the factor\n");
    scanf("%d",&n);
    printf("Enter the pth factor\n");
    scanf("%d",&p);
    int result=Find_the_pthfactor(n,p);
    if(result!=-1)
    printf("The pth factor %d of the number %d id %d\n",p,n,result);
    else
    printf("The pth factor %d of number %d if not found\n",p,n);
    return 0;
}