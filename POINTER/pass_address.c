#include<stdio.h>
  int swap(int *x, int *y)
  {
    int t;
    t=*x;
    *x=*y;
    *y=t;
    return 0;
  }
  void swap1(int a,int b)
  {
    int t;
    t=a;
    a=b;
    b=t;
    printf("After value swap, a=%d b=%d",a,b);
  }
  void main()
  {
    int a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swap, a=%d b=%d",a,b);
    swap1(a,b);
    printf("\nAfter swap1, a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter pointer swap, a=%d b=%d",a,b);
  }