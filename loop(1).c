/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,even;
    num=1;
    while(num<100){
        if(num%2==0){
        printf("%d",num);
        }
        num++;
    }

    return 0;
}
