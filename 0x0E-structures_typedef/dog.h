#ifndef _DOG_HEADER_
#define _DOG_HEADER_

/**
 * struct dog - A new simple structure type for dog
 * @name: A string pointer to the dog name
 * @age: A float variable of the dog age.
 * @owner: A string pointer to name of the dog owner.
 *
 * Description: A structure for describing details about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -  A new typedef for the struct, dog.
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /** _DOG_HEADER_ **/
