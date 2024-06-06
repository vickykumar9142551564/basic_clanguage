#include <stdio.h>
#include <string.h>
struct students{
    int roll;
    char name[10];
    float marksl;
    float marks2;
    float marks3;
};
int main(){
    int s = 0;
    int f = 0;
    int a = 0;
    struct students arr[3], temp;
    for (int i = 0; i < 3; i++){
        printf("Enter roll number:");
        scanf("%d", &arr[i].roll);
        printf("enter student name:");
        scanf("%s", arr[i].name);
        printf("enter the marks1:");
        scanf("%d", &arr[i].marksl);
        printf("enter the marks2:");
        scanf("%d", &arr[i].marks2);
        printf("enter the marks3:");
        scanf("%d", &arr[i].marks3);
        if (arr[i].marksl < 50 || arr[i].marks2 < 50 || arr[i].marks3 < 50){
            printf("student is fail.\n");
            f++;
        }
        if ((arr[i].marksl<50 && arr[i].marks2<50) || (arr[i].marks2<50 || arr[i].marks3<50) && (arr[i].marksl<50 || arr[i].marks3<50)){
            a++;
        }
        else{
            float totalmarks= arr[i].marksl+arr[i].marks2+arr[i].marks3;
            float percentage=totalmarks/3;
            if(percentage>=70){
                printf("first class with %f percentage\n",percentage);
            }
            else if(percentage>=55&&percentage<70){
                printf("second class with %f percentage\n",percentage);
            }
            else if(percentage>=50&&percentage<55){
                printf("pass class with %f percentage\n",percentage);
            }
        }
        s++;
    }
    printf("total number of student:%d",s);
    printf("total number of failed student:%d",f);
    printf("total number of student failed in more than one subject:%d\n",a);
}