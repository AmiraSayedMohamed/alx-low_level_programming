#ifndef DOG_H
#define DOG_H

/**
 * struct dog - its's a struct his name is dog
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlength(const char *str);
char *_strcopy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
