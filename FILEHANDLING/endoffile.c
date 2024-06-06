#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("endoffile.txt","r");
    char ch;
    ch=fgetc(fp);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fp);
    }
    printf("\n");
    fclose(fp);
    return 0;
}