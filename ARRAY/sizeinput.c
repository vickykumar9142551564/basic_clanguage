#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}