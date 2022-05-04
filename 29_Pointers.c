#include <stdio.h>

int main(){

  char name;
  char * aName = &name;
  double Gpa;
  double * pGpa = &Gpa;
  int age;
  int * pAge = &age;


   printf("Enter the age:");
   scanf("%d", &age);
   printf("\nMemory Address of age is %p", &age);


  return 0;
}