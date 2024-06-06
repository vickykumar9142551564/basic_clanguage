#include<stdio.h>
typedef struct student{
    char name[100];
    int roll_num;
    float cgpa;
}student;
void printinfo(student s1);
int main(){
    student s1={"vicky",123,8.31};
    printinfo(s1);
    return 0;
}
void printinfo(student s1){
    printf("name is %s\n",s1.name);
    printf("roll number is %d\n",s1.roll_num);
    printf("cgpa is %f\n",s1.cgpa);
}
//structures are pass by value