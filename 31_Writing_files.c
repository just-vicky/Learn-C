#include <stdio.h>

int write();
int main(){

  

  FILE * fpointer = fopen("demo.c", "a");

  fprintf(fpointer,"\n demo is written");

  fclose(fpointer);

  write();
  return 0;

}

int write(){

  FILE * fpointer = fopen("demo.c", "w");

  fprintf(fpointer,"\n demo is not written");

  fclose(fpointer);
  return 0;

}