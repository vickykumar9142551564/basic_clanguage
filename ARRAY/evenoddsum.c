#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n],i;
    int evensum=0,oddsum=0;
    for(i=0;i<n;i++){
        printf("enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }
    }
    int result=oddsum-evensum;
        printf("%d",result);
    return 0;
}