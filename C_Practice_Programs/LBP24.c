/* LBP24
~~~~~
Sum of even numbers
Implement a program to find sum of even number between x and y both are inclusive.

input -----> two int values
constraint-> no
output ----> sum of even numbers between x and y */

#include "common_header.h"
int main()
{
    int n1,n2;
    printf("Enter the two values\n");
    scanf("%d %d",&n1,&n2);
    int sum=0;
    printf("The even numbers between %d and %d is\n",n1,n2);
    for(int i=n1;i<=n2;i++)
    {
        if(i%2==0){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nThe sum of even numbers between %d and %d is %d ",n1,n2,sum);
    return 0;
}
