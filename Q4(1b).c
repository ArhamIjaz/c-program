/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int cel;
float far;
printf("enter the temp to convert from Celsius to Fahrenheit ");
scanf("%d",&cel);
far=(float)cel*1.8+32;
printf("%f degrees Fahrenheit",far);
    return 0;
}
