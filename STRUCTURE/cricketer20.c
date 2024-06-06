#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int number_of_matches;
        float average;
    }cricketer;
    cricketer arr[3];
    printf("enter details");
    for(int i=0;i<3;i++){
        scanf("%s",&arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].number_of_matches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf("name is : %s\n",arr[i].name);
        printf("age is : %d\n",arr[i].age);
        printf("number of matches are : %d\n",arr[i].number_of_matches);
        printf("average matches are : %f\n\n",arr[i].average);
    }
    return 0;
}