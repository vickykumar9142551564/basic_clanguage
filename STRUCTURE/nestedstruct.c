#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[10];
        int roll;
        int marks;
    }student;
    typedef struct beststudent{
        student basic;
        char class_possition[20];
    }beststudent;
    beststudent ram;
    strcpy(ram.class_possition,"first possion");
    strcpy(ram.basic.name,"ram");
    ram.basic.roll=1;
    ram.basic.marks=20;
    return 0;
}