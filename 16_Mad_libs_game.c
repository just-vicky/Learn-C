#include <stdio.h>

int main()
{
  char madlib1[30];
  char madlib2[30];
  char madlib3[30];
  char madlib4[30];

  printf("Enter the first madlib:");
  scanf("%s",madlib1);
  printf("Enter the second madlib:");
  scanf("%s",madlib2);
  printf("Enter the third madlib:");
  scanf("%s%s",madlib3,madlib4);

  printf("Roses are %s\n", madlib1);
  printf("%s are pink\n", madlib2);
  printf("%s %s is a skunk\n", madlib3, madlib4);

  return 0;

}