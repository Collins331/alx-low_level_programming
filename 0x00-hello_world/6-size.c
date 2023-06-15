#include <stdio.h>

int main(void)
{
	char myChar;
	int myInt;
	long int myLong;
	long long int myLongLong;
	float myFloat;

	printf("Size of char: %lu byte(s)\n", sizeof(myChar));
	printf("Size of an int: %lu bytes(s)\n", sizeof(myInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(myLong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(myLongLong));
	printf("Size of a float: %lu byte(s)\n", sizeof(myFloat));

	return (0);
}
