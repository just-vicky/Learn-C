#include <stdio.h>

int main()
{
  char madlib1[30];
  char madlib2[30];
  char madlib3[30];

  printf("Enter the first madlib:");
  scanf("%s",madlib1);
  printf("Enter the second madlib:");
  scanf("%s",madlib2);
  printf("Enter the third madlib:");
  scanf("%s",madlib3);

  printf("Roses are %s\n", madlib1);
  printf("%s is pink\n", madlib2);
  printf("%s are skunk\n", madlib3);

  return 0;

}