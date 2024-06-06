#include<stdio.h>
void bbb(void);
int main(){
    bbb();
    printf("hello\n");
    bbb();
}
void bbb(void){
    int i;
    for(i=1;i<10;i++){
        printf("_");
        printf("\n");
    }
}