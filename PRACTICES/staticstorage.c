/*#include <stdio.h>
void increment();
int main(){
    increment();
    increment();
    increment();
    return 0;
}
void increment(){
    static int i = 1;
    printf("%d \n", i);
    i = i + 1;
}*/
#include <stdio.h>
void increment();
int main()
{
    increment();
    increment();
    increment();
    return 0;
}
void increment()
{
    int i = 1;
    printf( "%d \n", i);
    i = i + 1;
}