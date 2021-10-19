/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float sum;
    printf("enter two numbers to get the sum\n");
    scanf("%f %f",&num1,&num2);
    sum=num1+num2;
    printf("the sum is %.2f",sum);
    return 0;
}
