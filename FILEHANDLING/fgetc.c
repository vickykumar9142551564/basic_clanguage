#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("fgetcfputc.txt","r");
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));
    fclose(fp);
}