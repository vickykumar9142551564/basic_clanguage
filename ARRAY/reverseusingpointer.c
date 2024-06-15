#include<stdio.h>
void main(){
    int n,arr[10],i;
    int *p=arr;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    p=arr+(n-1);
    for(i=n;i>0;i--)
    {
        printf("%d ",*p);
        p--;
    }

}