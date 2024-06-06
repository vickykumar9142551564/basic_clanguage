#include<stdio.h>
#include<string.h>
int main(){
 char str[40];
 printf("Enter string:\n");
 gets(str);
 strupr(str);
 printf("String in uppercase is: %s",str);
 return 0;
}