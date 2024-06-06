#include <stdio.h>
#include<stdlib.h>
int main() {
int size, i;
int *ptr;
printf("Enter the enteger number:");
scanf("%d", &size);
ptr = (int *)calloc(size,sizeof(int));
for (i = 0; i < size; i++){
    printf("enter the value of ptr[%d]",i);
    scanf("%d", &ptr[i]);
}
for (i = 0; i < size; i++){
    printf("%d\t",ptr[i]);
}
return 0;
}
