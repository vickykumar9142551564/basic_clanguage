#include<stdio.h>
int main(){
    int arr[5],i;
    for(i=0;i<5;i++){
        printf("enter the value of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }   
}