#include <stdio.h>
#include <string.h>
struct myStructure {
  int myNum;
  char myLetter;
  char myString[100];
};
int main() {
  struct myStructure s1 = {123, 'a', "vicky"};
  s1.myNum = 35;
  s1.myLetter = 'z';
  strcpy(s1.myString, "VICKY");
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
  return 0;
}