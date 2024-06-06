#include<stdio.h>
#include<conio.h>
#include<math.h>
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mult(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}
int mod(int x,int y){
    return x%y;
}
int main () {
    int a,b,summation,substration,multiplication,division,modulus;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    summation=add(a,b);
    substration=sub(a,b);
    multiplication=mult(a,b);
    division=div(a,b);
    modulus=mod(a,b);
    printf("sum is :%d \n",summation);
    printf("sub is :%d \n",substration);
    printf("mult is is :%d \n",multiplication);
    printf("div is :%d \n",division);
    printf("modulus is :%d \n",modulus);
    return 0;
}