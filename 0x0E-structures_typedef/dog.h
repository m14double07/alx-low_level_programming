#ifndef DOG_H
#define DOG_H

/**
*struct dog - Entry into the program
*@age: Dog's age
*@name: Dog's name
*@owner: Dog's owner
*/

struct dog
{
	char *name;
	int age;
	char *owner;
}

void first_dog(struct dog *d, char *name, int age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif


