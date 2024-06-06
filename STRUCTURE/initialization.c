#include<stdio.h>
struct student{
    char name[100];
    int roll_num;
    float cgpa;
};
int main(){
    struct student s1={"vicky",123,8.31};
    printf("name is %s\n roll number is %d\n cgpa is %f\n",s1.name,s1.roll_num,s1.cgpa);
    return 0;
}