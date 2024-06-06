#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    printf("enter input");
    gets(str);
    int size=0,k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    int i,j;
    for(i=0,j=size-1;i<=j;i++,j--){
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    puts(str);
    return 0;
}