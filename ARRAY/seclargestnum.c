#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    int i;
    int max=INT_MIN;
    int smax=INT_MIN;
    for(i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&&smax!=arr[i]){
            smax=arr[i];
        }
    }
    printf("second largest number is %d",smax);
}