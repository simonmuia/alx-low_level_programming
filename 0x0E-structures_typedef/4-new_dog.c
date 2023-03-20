#include "dog.h"

/**
 * new_dog - creates new item dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog otherwise NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptrdog;
int i, lname, lowner;

ptrdog = malloc(sizeof(ptrdog));
if (ptrdog == NULL || !(name) || !(owner))
{
free(ptrdog);
return (NULL);
}
for (lname = 0; name[lname]; lname++)
;
for (lowner = 0; owner[lowner]; lowner++)
;
ptrdog->name = malloc(name + 1);
ptrdog->owner = malloc(lowner + 1);
if (!(ptrdog->name) || !(ptrdog->owner))
{
free(ptrdog->name);
free(ptrdog->owner);
free(ptrdog);
return (NULL);
}
for (i = 0; i < lname; i++)

ptrdog->name[i] = name[i];
ptrdog->name[i] = '\0';
ptrdog->age = age;

for (i = 0; i < lowner; i++)
ptrdog->owner[i] = owner[i];
ptrdog->owner[i] = '\0';
return (ptrdog);
}
