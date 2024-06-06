#include<stdio.h>
#include<conio.h>
void america(){
    printf("I am american.\n");
}
void nepal(){
    printf("I am nepali.\n");
    america();
}
void australia(){
    printf("I am australian.\n");
    nepal ();
}
void india(){
    printf("I am indian.\n");
    australia();
}
int main (){
    india ();
    return 0;
}