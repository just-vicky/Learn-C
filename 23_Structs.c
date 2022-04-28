#include <stdio.h>
#include <string.h>

struct Student
{
  char nameF[30];
  int  age;
  int marks;
  double gpa;
};




int main(){
  struct Student Vikram ;
  strcpy(Vikram.nameF, "Vikram");
  Vikram.age = 22;
  Vikram.marks = 345;
  Vikram.gpa = 3.5;


  printf("%s", Vikram.nameF);
  

  return 0;
}