#include<stdio.h>
int check (int);
int main(){
    int i=35,c;
    c=check(i);
    printf("%d",c);
    return 0;
}
int check(int ch){
    if(ch>=45){
        return (10);
    }
    else{
        return (10*5);
    }
}
