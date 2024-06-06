#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={2,4,5,6,7,3,1};
    int x=5;
    int index=0;
    bool flag=true;
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            flag=true;
            index=i;
            break;
        }
    }
    if(flag==true){
        printf("%d is present in the array and its index is %d",x,index);
    }
    else{
        printf("%d is not present in the array");
    }
    return 0;
}