/* LBP21
~~~~~~
Christmas offer

An e-commerce company plans to give their customers a special discount for the Christmas,
they are planning to offer a flat discount. The discount value is calculated 
as the sum of all prime digits in the total bill amount.

Write an algorithm to find the discount value for the given total bill amount.

input ----> the input consists of an integer order value representing the total bill amount
condition-> no conditions
output ---> print an integer representing discount value for the given total bill amount. */


#include "common_header.h
int main()
{
    long long int n;
    int sum=0;
    printf("\nEnter the total bill amount $");
    scanf("%lld",&n);
    char num_digits[20];//char variable to store the integer as character
    snprintf(num_digits,sizeof(num_digits),"%lld",n);//convert integer to char
    int digits=0;
    while(num_digits[digits]!='\0')//this is used to find the number of digits in array
    {
        digits++;
    }
    int separate_digits[digits];//store the digits in a array
    for(int i=0;i<digits;i++)
    {
        separate_digits[i]=num_digits[i]-'0';//ascii value of 0-9==48-59 so if the numner is 5 asccii is
                                             // 53 subract ascii value of '0' as 48==>53-48= 5 here we 
                                             // convert the char to integer.
    }
    for(int i=0;i<digits;i++)
    {
        printf("%d\t",separate_digits[i]);
    }

    for(int i=0;i<digits;i++)
    {   
        if(separate_digits[i]==1) //if the number contain 1 it will skip the  1st for loop 1 time
        {
            continue;
        }
        int is_prime=1;
        for(int j=2;j<separate_digits[i];j++)  
        {
            if(separate_digits[i]%j==0) // if the number is prime it will not enter into if loop isprime
                                        // variable is remains 1 (i.e) isprime=1
            {
                is_prime=0;
                break;
            }
        }
        if(is_prime)
        sum=sum+separate_digits[i];
    }
    printf("\nHere is the disount of total bill amount is $%d",sum);
    return 0;
} 