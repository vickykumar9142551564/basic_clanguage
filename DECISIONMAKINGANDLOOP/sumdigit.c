#include<stdio.h>
int main(){
    int temp,n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("The sum of digit is %d",sum);
}