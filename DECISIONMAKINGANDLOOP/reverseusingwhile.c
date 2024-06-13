#include<stdio.h>
int main(){
    int n,rev=0,temp;
    printf("enter a number:");
    scanf("%d",&n);
    int i=1;
    while(n!=0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("reverse num is:%d",rev);
}