#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter the number of row");
    scanf("%d",&n);
    int m;
    printf("enter the number of column");
    scanf("%d",&m);
    int arr[n][m],sum=0;;
    for(int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            printf("enter the value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          sum=sum+arr[i][j];
        }
    }
    printf("the sum is %d",sum);
    return 0;
}