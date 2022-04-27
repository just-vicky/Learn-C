#include <stdio.h>

int main()
{
  char name[] = "hide";

  printf("my name is %s\n", name);

  const char name2[] = "hide";/*
  If the variable is changed in any other places, the program will 
  throw an error because 
  
  */

  printf("my name is %s\n", name2);


  return 0;
}