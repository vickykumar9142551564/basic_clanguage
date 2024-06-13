#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter a number:");
    scanf("%d",&n);
    do{
        if(n%i==0){
            printf("%d\n",i);
        }
        i++;
    }
    while(i<=n);
}