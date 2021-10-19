/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,sum;
    sum=0;
    printf("enter the number for sum");
    scanf("%d",&num);
    while(0<num){
        sum=sum+num;
       
        num--;
    }
     printf("%d",sum);

    return 0;
}
