#include<stdio.h>
#include<conio.h>
int main(){
    char str1[100];
    char str2[100];
    printf("enter the string value :");
    gets(str1);
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    puts(str2);
}