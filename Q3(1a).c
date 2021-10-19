/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a;
int b;
int c;
a=2;
b=4;
printf("before swapping a is %d and b is %d\n",a,b);
c=b;
b=a;
a=c;
printf("After swapping a is %d and b is %d\n",a,b);
}
