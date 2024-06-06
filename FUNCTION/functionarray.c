#include<stdio.h>
void function(int arr[]){
    arr[0]=2;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
    function(arr);
    for(int i=0;i<6;i++){
      printf("%d ",arr[i]);
    }
}