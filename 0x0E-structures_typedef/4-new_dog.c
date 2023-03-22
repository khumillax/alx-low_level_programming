#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog (dog_t *)
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *ndog; /*create an instance of dog_t*/

	/*get length of string name*/
	while (name[i] != '\0')
		i++;

	/*get length of string owner*/
	while (owner[j] != '\0')
		j++;

	/*save memory for dog_t instance*/
	ndog = malloc(sizeof(dog_t));

	/*check malloc didn't fail*/
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}

	/*save memory for member, name*/
	ndog->name = malloc(i * sizeof(ndog->name));

	/*check malloc didn't fail*/
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	/*assign name*/
	for (k = 0; k <= i; k++)
		ndog->name[k] = name[k];

	/*assign age*/
	ndog->age = age;

	/*save memory for member, owner*/
	ndog->owner = malloc(j * sizeof(ndog->owner));

	/*check malloc didn't fail*/
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	/*assign owner*/
	for (k = 0; k <= j; k++)
		ndog->owner[k] = owner[k];
	return (ndog);
}
