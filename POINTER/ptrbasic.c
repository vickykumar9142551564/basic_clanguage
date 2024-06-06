#include<stdio.h>
int main(){
    int i=10;
    int *ptr=&i;
    printf("%d\n",i);
    printf("%d\n",*ptr);
    printf("%d\n",*(&i));
}