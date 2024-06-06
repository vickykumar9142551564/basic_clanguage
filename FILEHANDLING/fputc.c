#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("fgetcfputc.txt","w");
    fputc('n',fptr);
    fputc('i',fptr);
    fputc('t',fptr);
    fputc('e',fptr);
    fputc('s',fptr);
    fputc('h',fptr);
    fclose(fptr);
}