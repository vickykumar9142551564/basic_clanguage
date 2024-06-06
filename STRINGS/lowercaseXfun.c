#include<stdio.h>
#include<string.h>
int main(){
    char str [100];
    printf("enter string");
    gets(str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("lower case string is %s",str);
}