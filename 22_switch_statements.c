#include <stdio.h>

int main()
{
  char grade;

  printf("Enter the grade: ");
  scanf("%c",&grade);
  
  switch (grade){
  {
  case 'A':
    printf("You did great");
    break;
  case 'B':
    printf("You did fine");
    break;
  case 'C':
    printf("You failed");
    break;
  
  default:
    printf("Invalid grade");
    break;
  }

  }
  
  return 0;
}