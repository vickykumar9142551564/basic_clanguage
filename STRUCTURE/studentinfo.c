#include<stdio.h>
#include<string.h>
struct student{
    int roll_num;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    struct student s2;
    s1.roll_num=123;
    s1.cgpa=8.31;
    strcpy(s1.name,"vicky");
    printf("roll number is %d\n",s1.roll_num);
    printf("cgpa is %f\n",s1.cgpa);
    printf("name is %s\n",s1.name);

    s2.roll_num=124;
    s2.cgpa=9.74;
    strcpy(s2.name,"vijay");
    printf("roll number is %d\n",s2.roll_num);
    printf("cgpa is %f\n",s2.cgpa);
    printf("name is %s\n",s2.name);
    return 0;
}