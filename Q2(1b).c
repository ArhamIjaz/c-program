/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hrs;
    int mins;
    int totalmins;
    printf("enter hours and mins to get total mins\n");
    scanf("%d %d",&hrs,&mins);
    totalmins=(60*hrs)+mins;
    printf("Input Hours: %d \n",hrs);
    printf("Input minutes: %d \n ",mins);
    printf("Total: %d minutes",totalmins);
    return 0;
}
