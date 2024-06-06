#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    printf("value before swaping %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swaping is %d %d",a,b);
}