#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,3,6,2};
    int i,j;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){ 
            if(arr[i]==arr[j]){
                printf("duplicate number is %d \n",arr[i]);
            }
        }
    }
return 0;  
}