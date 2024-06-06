#include<stdio.h>
int main(){
    int arr[10];
    int i,avg,sum=0;
    for(i=0;i<10;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+arr[i];
    }
    printf("sum is %d\n",sum);
    avg=sum/2;
    printf("averrage is %d",avg);
}