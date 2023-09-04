/* LBP31
~~~~~
Create PIN using Three given numbers

"Secure Assets Private Ltd", a small company that deals with lockers has recently started manufacturing digital locks which can be locked and unlocked using PINs (passwords). You have been asked to work on the module that is expected to generate PINs using three input numbers.

The three given input numbers will always consist of three digits each 
i.e. each of them will be in the range >=100 and <=999.

Bellow are the rules for generating the PIN.

1. The PIN should made up of 4 digits.
2. The unit (ones) position of the PIN should be the least of the units position of the three numbers.
3. The tens position of the PIN should be the least of the tens position of the three input numbers.
4. The hundreds position of the PIN should be least of the hundreds position of the three numbers.
5. The thousands position of the PIN should be the max of all digits in the three input numbers.

input ----------> three numbers
constraints ----> all the numbers must be in the range of >=100 and <=999
output ---------> PIN value
 */

#include "common_header.h"
#define N 3
int pingeneration(int a, int b, int c);


int pingeneration(int a, int b, int c)
{
    int num1=a;
    int num2=b;
    int num3=b;
    int ones_unit,tens_unit,hundreds_unit;
    int max1,max2,max3,max_all;
    int A[N],B[N],C[N];
    for(int i=0;i<3;i++)
    {
        A[i]=num1%10;
        num1=num1/10;
    }
    for(int i=0;i<3;i++)
    {
        B[i]=num2%10;
        num2=num2/10;
    }
    for(int i=0;i<3;i++)
    {
        C[i]=num3%10;
        num3=num3/10;
    }
    
    ones_unit=A[0]<B[0]? (A[0]<C[0] ? A[0]:C[0]) : (B[0]<C[0] ? B[0]:C[0]);

    tens_unit=A[1]<B[1]? (A[1]<C[1] ? A[1]:C[1]) : (B[1]<C[1] ? B[1]:C[1]);
    
    hundreds_unit=A[2]<B[2]? (A[2]<C[2] ? A[2]:C[2]) : (B[2]<C[2] ? B[2]:C[2]);
    
    max1=A[0]>A[1]? (A[0]>A[2] ? A[0]:A[2]) : (A[1]>A[2] ? A[1]:A[2]);

    max2=B[0]>B[1]? (B[0]>B[2] ? B[0]:B[2]) : (B[1]>B[2] ? B[1]:B[2]);

    max3=C[0]>C[1]? (C[0]>C[2] ? C[0]:C[2]) : (C[1]>C[2] ? C[1]:C[2]);

   // printf("%d %d %d",ones_unit,tens_unit,hundreds_unit);
   // printf("\n");
   // printf("%d\n%d\n%d\n",max1,max2,max3);
    max_all=max1>max2 ? (max1>max3 ? max1:max3) : (max2>max3 ? max2:max3);
    
    int pin=(1000*max_all)+(100*hundreds_unit)+(10*tens_unit)+ones_unit;
    return pin;

}
int main()
{
    int num1,num2,num3;
    printf("Enter the three number containing three digits\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if((num1>100&&num1<999)&&(num2>100&&num2<999)&&(num3>100&&num3<999))
    {
       int PIN=pingeneration(num1,num2,num3);
        printf("The generated four digit pin is %d",PIN);
        //printf("correct numbers\n");
    }
    else{
        printf("The numbers should limits between 0 to 999");
    }
    return 0;
}