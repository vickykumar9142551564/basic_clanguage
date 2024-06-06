#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string value");
    gets(str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("upper case value is %s",str);
}
