#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A basic function like header file.
 * @name: The first memeber representing a string
 * @age: The second member representing a float
 * @owner: The third member representing a string
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/** dog_t - a new typedef name for the type struct dog **/
typedef struct dog dog_t;

int str_len(char *str);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
char *str_cpy(char *d, char *sc);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /** _DOG_H_ **/
