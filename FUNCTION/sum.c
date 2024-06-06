#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
int main () {
    int a,b,c;
    a=9;
    b=21;
    c=sum(a, b);
    printf("%d",c);
    return 0;
}