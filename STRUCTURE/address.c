#include<stdio.h>
#include<string.h>
typedef struct employee{
    char name[20];
    int sallery;
    int code;
}emp;
int main(){
    emp info;
    strcpy(info.name,"vicky");
    info.sallery=100000;
    info.code=4268;
    printf("%s\n",info.name);
    printf("%d\n",info.sallery);
    printf("%d\n",info.code);
    printf("\n");
    emp* x=&info;
    printf("%p\n",&info.name);
    printf("%p\n",&info.sallery); 
    printf("%p\n",&info.code);
    printf("%p\n",&x);
}