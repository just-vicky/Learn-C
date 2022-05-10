#include <stdio.h>

int main(){

  char line[200];

  FILE * fpointer = fopen("demo2.txt", "r");

  fgets(line, 200, fpointer);
  fgets(line, 200, fpointer);
  fgets(line, 200, fpointer);
  printf("%s", line);

  fclose(fpointer);

  return 0;
}