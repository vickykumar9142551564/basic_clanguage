
#include <stdio.h>
int main()
{
    char d[10];
    printf("Enter the string:");
    gets(d);
    char *p = d;
    int i = 0;
    while (*p != '\0'){
        i++;
        p++;
    }
    printf("Length of string: %d", i);
    return 0;
}
