#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter string");
    gets(str);
    int i=0,s=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            s++;
        }
        i++;
    }
    printf("vowel is %d",s);
}