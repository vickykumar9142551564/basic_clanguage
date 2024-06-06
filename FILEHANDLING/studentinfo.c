#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("studentinfo.txt","w");
    char name[20];
    int age;
    float cgpa;
    printf("enter the name of student:");
    scanf("%s",name);
    printf("enter age:");
    scanf("%d",&age);
    printf("enter cgpa:");
    scanf("%f",&cgpa);
    fprintf(fptr,"student name is = %s\n",name);
    fprintf(fptr,"age is %d\n",age);
    fprintf(fptr,"cgpa is %f\n",cgpa);
    fclose(fptr);
    return 0;
}