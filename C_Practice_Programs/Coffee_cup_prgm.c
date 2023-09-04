/* Free Coffee Cups
For each of the 6 coffee cups I buy, I get a 7th cup free. In total, I get 7 cups. 
Implement a program that takes n cups bought and print as an integer the total number of cups I would get.

input -------------> n number of cups from user
constraints -------> n>0
output ------------> number of cups present have */

#include "common_header.h"
unsigned int coffe_cups(int a);
int main()
{
    int n,temp,temp1;
    printf("Enter the no of cups want to buy ");
    scanf("%d",&n);
    temp=n;
    temp1=coffe_cups(temp);
    printf("Enter the cups presently have %d", temp1);
}
unsigned int coffe_cups(int a)
{
     int temp2;
    if(a>=6)
    {
        temp2=a/6;
        temp2=temp2+a;
        return temp2;
        exit(1);
    }
    else
    {
        return a;
    }
}
    
