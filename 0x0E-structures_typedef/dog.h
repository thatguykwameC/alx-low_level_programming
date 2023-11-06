#ifndef DOG_H
#define DOG_H

/**
 * struct dog - main
 * @name: name of dog
 * @owner: name of dog's pwner
 * @age: dog's age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Defines a new type dog_t for struct_dog */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
