#include <stdio.h>
#include <stdlib.h>

int main(){

  int age;
  int * pAge = &age;


  printf("Enter the age:");
  scanf("%d", &age);
  printf("%d", &*&age);
  return 0;
}