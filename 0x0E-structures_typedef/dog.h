#ifndef Dog_H
#define Dog_H

/**
 * struct dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
