#include<stdio.h>
int main(){
    int x=10;
    int *ptr=&x;
    *ptr=40;
    int **ptr1=&ptr;
    printf("a=%d\n",x);
    printf("address=%p\n",ptr);
    printf("address=%p\n",ptr1);
}