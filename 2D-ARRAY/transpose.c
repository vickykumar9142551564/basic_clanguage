#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of row");
    scanf("%d",&n);
    printf("enter the number of column");
    scanf("%d",&m);
    int arr[n][m],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter the value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}