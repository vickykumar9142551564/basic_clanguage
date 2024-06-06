#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf("enter first string :");
    gets(str1);
    printf("enter second string :");
    gets(str2);
    int i=0,j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    printf("conctenated string is %s",str1);
return 0;
}