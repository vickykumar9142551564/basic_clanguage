#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("enter any string\n");
    gets(str);
    int i=0;
    while(str[i]!='\0'){
        printf("%c\n",str[i]);
        i++;
    }
    printf("length of string is %d",i);
    return 0;  
}