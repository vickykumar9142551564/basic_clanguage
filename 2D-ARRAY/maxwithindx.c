#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    printf("enter the number of row:");
    scanf("%d",&n);
    printf("enter the number of column:");
    scanf("%d",&m);
    int arr[n][m];
    int max=INT_MIN;
    int i,j;
   for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter the value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    printf("maximum number is %d",max);
}