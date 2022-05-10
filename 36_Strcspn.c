#include <stdio.h>
#include <string.h>

int main(){

char name[30];

puts("Enter your name:");
fgets(name,30,stdin);


int changePosition = strcspn(name,"\n");
name[changePosition]= '\0';

printf("My name is %s!", name);



  return 0;
}