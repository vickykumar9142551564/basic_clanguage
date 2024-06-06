#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[20];
    int marks_in_subject1;
    int marks_in_subject2;
};
int main(){
    struct student a[3];
    for(int i=0;i<3;i++){
    printf("roll number:");
    scanf("%d",&a[i].roll);
    printf("enter name:");
    scanf("%s",&a[i].name);
    printf("enter marks 1:");
    scanf("%d",&a[i].marks_in_subject1);
    printf("enter marks 2:");
    scanf("%d",&a[i].marks_in_subject2);
    }
    for(int i=0;i<3;i++){
        float totalmarks=a[i].marks_in_subject1+a[i].marks_in_subject2;
        float percentage=(totalmarks/200)*100;
        printf("%d\n",a[i].roll);
        printf("%s\n",a[i].name);
        printf("%f\n",totalmarks);
        printf("%f\n\n",percentage);   
    }
}
