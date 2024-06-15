#include<stdio.h>
#include<stdlib.h>
  void main()
  {
    FILE *fp;
     char a[20];
     printf("Enter the string:");
     gets(a);
    fp=fopen("Vicky.txt","w");
    fputs(a,fp);
    fclose(fp);
    fp=fopen("Vicky.txt","r");
    printf("\n\n%s",fgets(a,20,fp));
    fclose(fp);
  }
