#include "dog.h"
#include <string.h>


/**
 * new_dog - creates a new dog
 * @name: name member of the dog
 * @age: age member of the dog
 * @owner: owner member of the dog
 *
 * Return: pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name;
	char *temp_owner;
	dog_t *new_dg;

	temp_name = malloc(sizeof(char) * strlen(name) + 1);
	temp_owner = malloc(sizeof(char) * strlen(owner) + 1);
	new_dg = malloc(sizeof(dog_t));

	if (temp_name && temp_owner && new_dg)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);
		new_dg->name = temp_name;
		new_dg->owner = temp_owner;
		new_dg->age = age;
	}
	else
	{
		free(temp_name);
		free(temp_owner);
		free(new_dg);

		return (NULL);
	}

	return (new_dg);
}
