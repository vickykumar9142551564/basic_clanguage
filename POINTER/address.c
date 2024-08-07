#include<stdio.h>
int main(){
    int x=10;
    int *ptr=&x;
    *ptr=40;
    int **ptr1=&ptr;
    printf("a=%d\n",x);
    printf("address=%u\n",ptr);
    printf("address=%u\n",ptr1);
}