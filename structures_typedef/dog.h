#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure defining dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_file;

/**
 * Functions Prototype from this project:
 **/
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
