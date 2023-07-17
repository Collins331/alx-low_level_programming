#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *struct dog - the structure
  *@name: the name of the dog
  *@age: the age of the dog
  *@owner: dogs owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
