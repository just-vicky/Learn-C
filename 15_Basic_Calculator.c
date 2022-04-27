#include <stdio.h>

int main()
{
  int num1;
  int num2;
  printf("Enter the first number:");
  scanf("%d", &num1);
  printf("Enter the second number:");
  scanf("%d", &num2);

  int ans = num1 + num2;
  printf("The ans is %d\n",ans);

  return 0;
  
}