#include<stdio.h>
int fact(int);
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("facrorial of %d is: %d",n,fact(n));
}
int fact(int n){
    if(n>=1){
        return n*fact(n-1);
    }
    else{
        return 1;
    } 
}
  