#include<stdio.h>
int main(){
    int x=10;
    int* a=&x;
    int** b=&a;
    int*** c=&b;
    int**** d=&c;
    printf("%d\n",x);
    printf("%d\n",*a);
    printf("%d\n",**b);
    printf("%d\n",***c);
    printf("%d\n",****d);
}