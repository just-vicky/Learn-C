#include <stdio.h>

typedef struct 
{
  char name[25];
  char gpa;
  int id;
}User;

// struct User
// {
//   char name[25];
//   char gpa;
//   int id;
// };




int main(){

// typedef = It is used for creating shortcuts for existing datatypes which will be used frequently

  // struct User user1 = {"vikram", 'S', 21};
  // printf("%s",user1.name);
  // instead of the above line we can use it using type def refer line 3

  User user1 = {"vikram", 'S', 21};
  printf("%s",user1.name);

  return 0;
}