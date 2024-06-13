#include<stdio.h>
int main(){
    int n,i;
    int temp,rev=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i=(n!=0);i++){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("%d\n",rev);
}