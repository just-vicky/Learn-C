#include <stdio.h>

int main()
{
  char Name[200];
  printf("Enter your full name:");
  fgets(Name, 200, stdin);
  printf("My full name is %s",Name);

  return 0;
  
}