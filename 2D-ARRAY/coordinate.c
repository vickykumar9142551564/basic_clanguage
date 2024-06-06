#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of row");
    scanf("%d",&n);
    printf("enter the number of column");
    scanf("%d",&m);
    int arr[n][m],i,j;
    int sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter the value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<(n-1);i++){
        for(j=1;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("sum is %d",sum);
    return 0;
}