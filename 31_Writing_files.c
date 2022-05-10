#include <stdio.h>

int write();

// for Apending file

int main(){

  // for apending (add (something) to the end of a written document.)

  FILE * fpointer = fopen("demo.txt", "a");

  fprintf(fpointer,"\n demo is perfect");

  fclose(fpointer);

  write();
  return 0;

}

// For writing 

// int write(){

//   FILE * fpointer = fopen("demo.c", "w");

//   fprintf(fpointer,"\n demo is not written");

//   fclose(fpointer);
//   return 0;

// }