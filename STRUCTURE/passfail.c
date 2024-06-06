#include<stdio.h>
#include<string.h>
struct student{
        char name[15];
        int marks_1;
        int marks_2;
        int marks_3;
    };
int main(){
    struct student arr[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter details\n");
        printf("enter name:");
        scanf("%s",&arr[i].name);
        printf("enter marks 1:");
        scanf("%d",&arr[i].marks_1);
        printf("enter marks 2:");
        scanf("%d",&arr[i].marks_2);
        printf("enter marks 3:");
        scanf("%d",&arr[i].marks_3);
    }
     for(i=0;i<3;i++){
        float totalmarks= arr[i].marks_1+arr[i].marks_2+arr[i].marks_3;
        float percentage=totalmarks/3;
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].marks_1);
        printf("%d\n",arr[i].marks_2);
        printf("%d\n",arr[i].marks_3);
        if(percentage>=70.0){
            printf("%s is pass by first division\n",arr[i].name);
        }
        else if(percentage>50.0&&percentage<70.0){
            printf("%s is pass by second division\n",arr[i].name);
        }
        else{
            printf("%s is fail\n",arr[i].name);
        }
    }
}