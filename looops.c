#include <stdio.h>
int main(){
int price,count=0,min=0,max=0;
float sum=0,avg=0;

while(price!=-1){
    printf("enter the price");
    scanf("%d",&price);
    if(price>0){
            count++;
            sum=sum+price;
            avg=sum/count;
    }
    if(count==0){
        min=price;
        max=price;
        }
        if(min>price && min>0){
            min=price;
            }
        if(max<price){
            max=price;
        }




}
printf("no. of bouquets=%d\n",count);
printf("min value is %d\n",min);
printf("max value is %d\n",count);
printf("avg value is %d\n",avg);

return 0;
}
