#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "world";
    int characterAge = 20;

    printf("This is the %s \n", characterName);
    printf("this the new %s \n", characterName);
    printf("additional %d\n", characterAge);
    printf("very much %d \n", characterAge);

    return 0;
}
