#include <stdio.h>

double cube(double num1){
  double ans = num1 * num1* num1;
  return ans;
  printf("Will not be printed");//will not be printed as the return statement has been given
}

int main()
{
  printf("answer : %f",cube(4));
  return 0;
}