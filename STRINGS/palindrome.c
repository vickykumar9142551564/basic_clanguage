#include<stdio.h>
#include<string.h>
int main(){
    int len,i,flag=0;
    char str[20];
    printf("Enter a string: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("palindrome number");
    }
    else{
        printf("Not a palindrome number");
    }
}