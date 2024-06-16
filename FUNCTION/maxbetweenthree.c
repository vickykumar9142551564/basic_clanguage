#include<stdio.h>
int max(int a,int b,int c);
int main(){
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    max(a,b,c);
}
int max(int a,int b,int c){
    if(a>b&&a>c){
        printf("%d is maximum",a);
    }
    else if(b>a&&b>c){
        printf("%d is maximum",b);
    }
    else{
        printf("%d is maximum",c);
    }
}