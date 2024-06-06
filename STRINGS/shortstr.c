#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("enter string");
    gets(str);
    char temp;
    int i, j;
    int n = strlen(str);
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Sorted string is %s \n", str);
    return 0;
}
