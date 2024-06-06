#include<stdio.h>
int main(){
    char str[]={'a','b','c','d','e','\0'};
    int i=0;
    while(str[i]!='\0'){
        printf("%c ",str[i]);
        i++;
    }
    return 0;
}