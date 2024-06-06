#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
int i;
int *ptr;
ptr = (int *)malloc(5 * sizeof(int));
printf("enter 5 number\n");
for (i = 0; i < 5; i++){
    printf("enter the value of ptr[%d]",i);
    scanf("%d", &ptr[i]);
}
ptr=(int*)realloc(ptr,8);
printf("enter 8 number\n");
for (i = 0; i < 8; i++){
    printf("enter the value of ptr[%d]",i);
    scanf("%d", &ptr[i]);
}
for (i = 0; i < 8; i++){
    printf("%d\n",ptr[i]);
}
return 0;
}