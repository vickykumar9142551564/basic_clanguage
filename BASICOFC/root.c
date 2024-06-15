#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float d, r1, r2, r, i;
    printf("Enter a,b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = ((-b) + sqrt(d)) / (2 * a);
        r2 = ((-b) - sqrt(d)) / (2 * a);
        printf("\nRoots are real and diffferent:\nr1= %f\n r2= %f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = (-b) / (2 * a);
        printf("\nRoots are real and same:\nr1=r2= %f", r1);
    }
    else
    {
        r = (-b) / (2 * a);
        i = sqrt(d) / (2 * a);
        printf("\nRoots are imaginary and diffferent:\nr1= %f + %fi\n r2= %f - %fi", r, i, r, i);
    }
}