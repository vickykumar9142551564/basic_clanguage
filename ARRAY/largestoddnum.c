#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n],i,max=0;
    for (i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if(arr[i]%2!=0){
            if(max<arr[i]){
                max=arr[i];
            }
        }
    }
    printf("largest odd number is %d",max);
return 0;
}