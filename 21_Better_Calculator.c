#include <stdio.h>

int main(){
  double num1;
  double num2;
  char sym;
  
  printf("Enter a first number:");
  scanf("%lf", &num1);
  printf("Enter symbol: ");
  scanf(" %c", &sym);
  printf("Enter a second number: ");
   scanf("%lf", &num2);

  if(sym == '+'){
    printf("%f", num1 + num2);
  }
  else if(sym = '-'){
    printf("%f", num1 - num2);
  }
  else if(sym =='*'){
    printf("%f", num1 * num2);
  }
  else if(sym == '/'){
    printf("%f", num1 / num2);
  }
  else{
    printf("invalid operator");
  }

  return 0;
}