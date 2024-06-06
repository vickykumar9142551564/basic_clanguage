#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    float cgpa;
    int roll;  
};
int main(){
    struct student cse[20];
    strcpy(cse[0].name,"vicky");
    cse[0].cgpa=8.31;
    cse[0].roll=123;
    printf("name is %s\n",cse[0].name);
    printf("cgpa is %f\n",cse[0].cgpa);
    printf("roll number is %d\n",cse[0].roll);
    return 0;
}