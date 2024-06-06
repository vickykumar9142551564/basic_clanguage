#include<stdio.h>
int main(){
    int n,temp;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("shorted array is %d\n",arr[i]);
    }
}
