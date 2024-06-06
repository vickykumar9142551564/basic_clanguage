#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int *ptr;
    printf("enter the size of array");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("enter the value of ptr[%d]",i);
        scanf("%d",&ptr[i]);
    }
        for(i=0;i<n;i++){
        printf("%d\t",ptr[i]);
    }
    free(ptr);
    ptr=(int*)malloc(2*sizeof(int));
    for(i=0;i<2;i++){
        printf("enter the value of ptr[%d]",i);
        scanf("%d",&ptr[i]);
    }
        for(i=0;i<2;i++){
        printf("%d\t",ptr[i]);
    }
}