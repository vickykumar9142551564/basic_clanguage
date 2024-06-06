#include<stdio.h>
int getsum(int arr[]);
int main(){
    int arr[5];
    int result,i;
    for(i=0;i<5;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    result =getsum(arr);
    printf("the sum of value is %d",result);
}
int getsum(int arr[]){
    int sum=0;
    int j;
    for(j=0;j<5;j++){
        sum=sum+arr[j];
    }
    return sum;
}