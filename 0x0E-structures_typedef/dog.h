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
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
#ifndef _DOGO_
#define _DOGO_
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
