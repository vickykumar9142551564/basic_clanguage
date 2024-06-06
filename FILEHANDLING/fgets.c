#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("fgets.txt","r");
    char str[100];
    printf("%s",fgets(str,100,fp));
    fclose(fp);
}