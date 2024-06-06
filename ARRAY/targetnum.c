#include<stdio.h>
int main(){
    int target =5;
    int arr[5]={1,2,3,4,5};
    int i,j;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(arr[i]+arr[j]==target){
                printf("target number is %d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}