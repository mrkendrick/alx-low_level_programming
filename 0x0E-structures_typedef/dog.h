#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - structure for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: same as above
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
void free_dog(dog_t *d);
#endif
