#include<stdio.h>
int main(){
    int x=10;
    int* a=&x;
    printf("%d\n",x);
    *a =20;
    printf("%d\n",x);
}