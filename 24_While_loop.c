#include <stdio.h>

int main(){

  int num1;

  printf("Enter the number:");
  scanf("%d", &num1);

  do
  {
     printf("The loop is successful\n");
    
    num1++;
     
  } 
  while(num1 <= 5 );
  
  return 0;
}