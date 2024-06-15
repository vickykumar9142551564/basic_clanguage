#include <stdio.h>
void main(){
    int a, b, r, x;
    char c;
    do{
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        printf("press 1 for add:\n");
        printf("press 2 for sub:\n");
        printf("press 3 for mult:\n");
        printf("press 4 for devide:\n");
        printf("press 5 for mod:\n");
        printf("Enter your choice:");
        scanf("%d", &x);
        switch (x){
        case 1:
            r = a + b;
            printf("\nSum of %d and %d= %d", a, b, r);
            break;

        case 2:
            r = a - b;
            printf("\nSub of %d and %d= %d", a, b, r);
            break;

        case 3:
            r = a * b;
            printf("\nMul of %d and %d= %d", a, b, r);
            break;

        case 4:
            r = a / b;
            printf("\nDiv of %d and %d= %d", a, b, r);
            break;

        case 5:
            r = a % b;
            printf("\nmod of %d and %d= %d", a, b, r);
            break;

        default:
            printf("\nInvalid choice.....\n");
            break;
        }
        printf("\nDo you want to continue?  (y/n):");
        fflush(stdin);
        scanf("%c", &c);
    }
    while (c == 'y' || c == 'Y');
    printf("Thank you");
}