#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
* print_dog - function prints a struct dog
* @d: struct dog to print
* Return: 0
*/
	void print_dog(struct dog *d)
	{
		if (d == NULL)
			return;


		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
	}
