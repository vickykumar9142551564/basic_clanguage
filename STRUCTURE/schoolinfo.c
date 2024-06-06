#include<stdio.h>
#include<string.h>
struct school{
    char name[100];
    char address[100];
    int num_of_student;
    int num_of_teacher;
};
int main(){
    struct school s1;
    strcpy(s1.name,"The Everest Public School");
    strcpy(s1.address,"Pachrukhi,siwan,Bihar");
    s1.num_of_student =1000;
    s1.num_of_teacher =25;
    printf("school name is: %s\n",s1.name);
    printf("school address is: %s\n",s1.address);
    printf("number of student is: %d",s1.num_of_student);
    printf("number of teacher is: %d\n",s1.num_of_teacher);
    return 0;
}