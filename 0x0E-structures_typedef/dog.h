#ifndef HEADER_FILE
#define HEADER_FILE dog.h
/**
 * struct dog - Define a new type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: This is a structure with
 * some data about dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
