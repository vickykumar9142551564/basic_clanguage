#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("entre the size of array");
    scanf("%d",&n);
    int arr[n],i;
    int max=INT_MIN;
    //int min=INT_MAX;
    for (i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }       
    }
    printf("maximum number is :%d",max);
    return 0;
}