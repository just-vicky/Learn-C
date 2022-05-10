#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  // printf("%d to %d", 0, RAND_MAX); This line shows the  maximum random numbers that can be generated. This depends on the tool used.
  // srand(9); this line is used to give the initial number to run the config given by the tool used.

  // srand(time(0)); //This line does not need to be given initial number as the time function generates number randomly for each second passses.
  
  printf("%d\n", rand() % 20); //This line prints a random number between the min max of the tool.
  printf("%d\n", rand() % 20);
  printf("%d\n", rand() % 20);
  printf("%d\n", rand() % 20);
  
  return 0;
}

