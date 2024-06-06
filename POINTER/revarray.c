#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n],i;
    int *p=arr;
    for(i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",p);
        p++;
    }
    p--;
    for(i=0;i<n;i++){
        printf("%d \n ",*(p-i));
    }
    return 0;                                                                                                                                                       
}