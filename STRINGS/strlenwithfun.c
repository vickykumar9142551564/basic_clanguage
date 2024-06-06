#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter any string");
    gets(str);
    printf("length of array is %d",strlen(str));
}