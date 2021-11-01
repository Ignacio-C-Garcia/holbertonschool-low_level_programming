#ifndef _HEADER_H_
#define _HEADER_H_
/**
 * struct dog - Short description
 * @name: name of the dog
 * @age: number
 * @owner: name of a person
 *
 * Description: Longer description
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
#endif
