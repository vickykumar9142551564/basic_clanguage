#include<stdio.h>
#include<string.h>
int main(){
    typedef struct employee{
        char name[10];
        char compnay_name[10];
        int sallery;
        int year;
    }emp;
    emp arr[5];
    for(int i=0;i<3;i++){
    strcpy(arr[i].name,"Vicky");
    strcpy(arr[i].compnay_name,"Google");
    arr[i].sallery=50000;
    arr[i].year=5;
    }
    for(int i=0;i<3;i++){
        printf("Name is %s\n",arr[i].name);
        printf("Company name is %s\n",arr[i].compnay_name);
        printf("Sallery is %d\n",arr[i].sallery);
        printf("experiance is %d\n\n",arr[i].year);
    }
}