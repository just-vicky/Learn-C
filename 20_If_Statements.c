#include <stdio.h>

int min(int num1, int num2, int num3)
{
  int ans;
  if(num1 < num2 && num1< num3){
    ans = num1;
  }
  else if(num2 < num1 && num2 < num3 ){
    ans = num2;
  }
  else{
    ans = num3;
  }
  return ans;
}

int main(){

  printf("The minimum number is %d", min(1, 3, 4));

  return 0;
}