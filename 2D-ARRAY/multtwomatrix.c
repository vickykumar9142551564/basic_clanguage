#include<stdio.h>
int main(){
    int arr[2][2]={1,2,3,4};
    int brr[2][2]={5,6,7,8};
    int crr[2][2];
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             crr[i][j]= 0;
            for(k=0;k<2;k++){
                crr[i][j]+=arr[i][k]*brr[k][j]; 
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
}