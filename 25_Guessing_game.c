#include <stdio.h>


int main(){
  int secret = 8;
  int guessNumber;
  int guessCount = 0;
  int guessLimit = 5;
  int guessClose = 0;

  // printf("Enter the secret number: ");
  // scanf("%d", &secret);

  while (guessNumber != secret && guessClose == 0)
  {
    if (guessCount < guessLimit){
    printf("Enter a guess: ");
    scanf("%d", &guessNumber);
    guessCount++;
    }
    else{
      guessClose =1;
    }
  }
  if(guessClose ==1){
    printf("You lose !!!");
  }
  else{
  printf("You win!!!");
  
  }


  return 0;
}