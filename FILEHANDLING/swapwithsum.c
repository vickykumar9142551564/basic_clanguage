#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("swapwithsum.txt","r");
    int a;
    fscanf(fp,"%d",&a);
    int b;
    fscanf(fp,"%d",&b);
    fclose(fp);
    fp=fopen("swapwithsum.txt","w");
    fprintf(fp,"sum is %d",a+b);
    fclose(fp);  
}