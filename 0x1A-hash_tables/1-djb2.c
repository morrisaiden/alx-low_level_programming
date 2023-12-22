#include "hash_tables.h"

/**
  * hash_djb2 - A function that passed the key to the hash table.
  * @str: The string to hash.
  * Return: The calculated hash.
  */

unsigned long int hash_djb2(const unsigned char *str)
