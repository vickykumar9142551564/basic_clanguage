#include<stdio.h>
#include<string.h>
typedef struct person{
    char name[20];
    int weight;
    int age;
}person;
int main(){
    person s1;
    strcpy(s1.name,"Vicky singh");
    s1.weight=72;
    s1.age=20;
    printf("%s\n",s1.name);
    printf("%d\n",s1.weight);
    printf("%d\n",s1.age);
    person* x=&s1;
    strcpy((*x).name,"Nitesh singh");
    x->weight=50;
    x->age=17;
    printf("%s\n",s1.name);
    printf("%d\n",s1.weight);
    printf("%d\n",s1.age);
}