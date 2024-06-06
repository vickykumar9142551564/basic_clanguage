#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int size;
    char *str;
    printf("Enter the size of string:");
    scanf("%d", &size);
    str = (char *)malloc(size * sizeof(char));
    printf("Enter the string: ");
    scanf("%s", str);
    printf("%s\n", str);
    printf("Enter the new size of string:");
    scanf("%d", &size);
    str = (char *)realloc(str, size * sizeof(char));
    printf("Enter the string: ");
    scanf("%s", str);
    printf("%s\n", str);
    free(str);
    return 0;
}
