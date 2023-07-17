#include "dog.h"
/**
  *new_dog - creates new dog
  *@name: the new dog's name
  *@owner: the dog owner
  *@age: tge dog's age;
  *Return: always charactaer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = (char *)malloc(strlen(name) + 1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);

	newDog->owner = (char *)malloc(strlen(owner) + 1);

	if (newDog->owner == NULL)
	{
		free(newDog->name);

		free(newDog);

		return (NULL);
	}
	strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
