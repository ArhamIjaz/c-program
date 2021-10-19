/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int num;
int m1;
int m2;
int m3;
int r;
int sum;
printf("enter a 4-digit number:");
scanf("%d",&num);
//printf("%d",num)//;
m1=num%10;
r=num/10;
m2=r%10;
r=r/10;
m3=r%10;
r=r/10;
sum=m1+m2+m3+r;
printf("Sum of 4 digit number is %d",sum);
    return 0;
}
