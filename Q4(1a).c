/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int base;
    int height;
    float area;
    float perimeter;
    printf("enter the base and height of triangle\n");
    scanf("%d %d",&base,&height);
    area=(float)0.5 * (base*height);
    perimeter=(float)base+height;
    printf("Area is %.3f and perimeter is %.3f",area,perimeter);
    return 0;
}
