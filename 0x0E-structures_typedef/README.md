C-STRUCTURES, TYPEDEF

Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

Define a new type dog_t as a new name for the type struct dog.

Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);



