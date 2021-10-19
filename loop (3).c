/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,c,table;
    c=0;
    printf("enter the number for the table upto 10\n");
    scanf("%d",&num);
    while(c<=10){
        table=num*c;
        printf("%d*%d=%d\n",num,c,table);
        c++;
    }
    

    return 0;
}
