#include <stdio.h>
struct myStructure {
  int myNum;
  char myLetter;
  char myString[100];
};
int main() {
  struct myStructure s1 = {123, 'a', "vicky"};
  struct myStructure s2;
  s2 = s1;
  printf("%d\n %c\n %s\n", s2.myNum, s2.myLetter, s2.myString);
  return 0;
}