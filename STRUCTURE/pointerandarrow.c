#include<stdio.h>
struct student{
    char name[100];
    int roll_num;
    float cgpa;
};
int main(){
    printf("using variable\n");
    struct student s1={"vicky",123,8.31};
    printf("name is %s\n roll number is %d\n cgpa is %f\n",s1.name,s1.roll_num,s1.cgpa);
    struct student *ptr = &s1;
    printf("using pointer\n");
    printf("name is %s\n roll number is %d\n cgpa is %f\n",(*ptr).name,(*ptr).roll_num,(*ptr).cgpa);
    printf("using arrow operator\n");
    printf("name is %s\n roll number is %d\n cgpa is %f\n",ptr->name,ptr->roll_num,ptr->cgpa);
    return 0;
}