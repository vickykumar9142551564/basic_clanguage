#include<stdio.h>
int main(){
    int n,temp,rev=0;
    printf("enter a number:");
    scanf("%d",&n);
    do{
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    while(n!=0);
    printf("reverse number is %d",rev);
}