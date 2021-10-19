/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int input,num;
    num=1;
    printf("enter the number to get the multiples\n");
    scanf("%d",&input);
    while(num<=input){
        if(input%num==0){
        printf("the multiple of %d is %d \n",input,num);
        }
        num++;
    }
    

    return 0;
}
