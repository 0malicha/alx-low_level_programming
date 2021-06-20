#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char aCharacter;
int aInteger;
long aLong;
long long aLongLong;
float aFloat;
printf("Size of a char: %lu byte(s)\n", sizeof(aCharacter));
printf("Size of an int: %lu byte(s)\n", sizeof(aInteger));
printf("Size of a long int: %lu byte(s)\n", sizeof(aLong));
printf("Size of a long long int: %lu byte(s)\n", sizeof(aLongLong));
printf("Size of a float: %lu byte(s)\n", sizeof(aFloat));
return (0);
}
