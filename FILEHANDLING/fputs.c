#include<stdio.h>
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("fputs.txt","w");
    char str[50];
    puts("enter string:");
    gets(str);
    fputs(str,fp);
    fclose(fp);
}