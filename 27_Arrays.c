#include <stdio.h>

int main(){

  char num[3][3] = {
    {1, 2, 0}, {3, 4, 9}, {5, 6, 8}

  };
  int i, j;
  for (i = 0; i < 3; i++)
  {
    {
      for (j = 0; j < 3; j++)
      {
        printf("%d,", num [i][j]);
      }
      
    }
    printf("\n\n");
    
  }
  
  return 0;
}