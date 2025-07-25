#ifndef _dog_h_
#define _dog_h_

/**
 *struct dog - poppy
 *@name: es el nombre del perro
 *@age: edad del perro
 *@owner: propietario del perro
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
void free_dog(dog_t *d);
#endif
