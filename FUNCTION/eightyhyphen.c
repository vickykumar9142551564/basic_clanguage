#include<stdio.h>
int line(int n);
int main(){
    int n;
    printf("enter the number of hyphen");
    scanf("%d",&n);
    printf("hyphen id %s",line(n));
}
int line(int n){
    int i;
    for(i=0;i<n;i++){
        printf("-\n ");
    }
}