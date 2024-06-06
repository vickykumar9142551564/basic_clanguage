#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("newtest.txt","w");
    if(fptr==NULL){
        printf("file does not exist");
    }
    else{
        fclose(fptr);
    }
}