#include <stdio.h> 
int primenumber(int num) 
{ 
    int i; 
    for (i = 2; i <= num-1; i++)  
    { 
        if (num % i == 0) 
        return 0; 
    } 
    return 1; 
} 
int main() 
{ 
    int num, res;
    printf("enter a number");
    scanf("%d",&num);
    res = primenumber(num);  
    if (res == 1){
        printf("%d is a prime number", num);
    }
    else{
        printf("%d is not a prime number", num);
    }
    return 0; 
}