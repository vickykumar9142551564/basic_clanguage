#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("oddnum.txt","w");
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%2!=0){
            fprintf(fp,"odd number is %d\n",i);
        }
    }
    fclose(fp);
}