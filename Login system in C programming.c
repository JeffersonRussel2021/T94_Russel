#include <stdio.h>

#include <string.h>

int main ()

{

char id[50];
char pin[50];

User:

printf("Enter your ID Number:\n");

scanf("%s", &id);

if (strcmp(id,"1100")==0)

printf("Enter PIN:\n");

scanf("%s", &pin);

if (strcmp(pin,"5555")==0)

{

printf("You have successfully login\n ID#:1100\n");

}

else

{

printf("Invalid ID/PIN!\n");

goto User;

}

return 0;

}

