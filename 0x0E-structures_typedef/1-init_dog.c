#include "dog.h"

/**
 * init_dog - initializes variable of struct dog
 * @d: struct dog
 * @name: pointer name
 * @age: age of a dog
 * @owner: owner of a dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if(d)
    {
        d -> name = name;
        d -> age = age;
        d -> owner = owner;
    }
}