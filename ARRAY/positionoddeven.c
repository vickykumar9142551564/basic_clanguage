#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n],i,sum=0,mult=1;
    for(i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);    
    }
    for(i=0;i<n;i++){
       if(i%2==0){
        sum=sum+arr[i];
       }
       else{
        mult=mult*arr[i];
       }   
    }
    printf("sum is %d\n",sum);
    printf("mult is %d\n",mult); 
    return 0;
}