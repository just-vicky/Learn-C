#include <stdio.h>
#include <stdlib.h>

void sayBye(char name[], int age){
  
  printf("hello %s, you are %d years old\n",name , age);

}


int main()
{
  printf("top\n");
  sayBye("Vikram", 22);
  printf("bottom");
  return 0;
}

