#include <stdio.h>
void main()
{
    int a, b, s;
start:
    printf("Enter a and b:");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        goto start;
    }
    else
    {
        s = a + b;
        printf("Sum =%d", s);
    }
}