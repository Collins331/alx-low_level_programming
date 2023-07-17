#include "dog.h"
/**
  *free_dog - frees the dogs
  *@d: the dog
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free (d);
	}
}
