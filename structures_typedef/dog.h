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
} dog_t;

/*Functions Prototype from this project:*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/*Function created before*/
int _strlen(char *s);
char *_strdup(char *str);

#endif
