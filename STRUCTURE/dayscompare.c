#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct days{
        int day;
        int month;
        int year;
    }days;

    days a,b;
    a.day=1;
    a.month=3;
    a.year=2004;
    b.day=12;
    b.month=5;
    b.year=2024;
    bool flag=true;
    if(a.day!=b.day){
        flag=false;
    }
    if(a.month!=b.month){
        flag=false;
    }
    if(a.year!=b.year){
        flag=false;
    }
    if(flag==true){
        printf("dates are same");
    }
    else{
        printf("dates are not same");
    }
}