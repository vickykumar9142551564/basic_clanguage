#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("text.txt","r");
    char ch;
    fscanf(fp,"%c",&ch);
    printf("character is = %c\n",ch);

    fscanf(fp,"%c",&ch);
    printf("character is = %c\n",ch);

    fscanf(fp,"%c",&ch);
    printf("character is = %c\n",ch);

    fscanf(fp,"%c",&ch);
    printf("character is = %c\n",ch);
    
    fscanf(fp,"%c",&ch);
    printf("character is = %c\n",ch);
    fclose(fp);
}