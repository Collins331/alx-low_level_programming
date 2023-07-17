#include "dog.h"
/**
  *init_dog - initialize a variable of type struct dog
  *@d: the struct variable
  *@name: the parameter
  *@age: the parameter in struct
  *@owner: the the parameter
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
