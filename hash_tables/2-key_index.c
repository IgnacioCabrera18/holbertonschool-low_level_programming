#include "hash_tables.h"

/**
 *
 *
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	//calcula el valor de hash
	//utilizando el algoritmo djb2
	hash_value = hash_djb2(key);
	//convierte el vaor hash en un index para la array de tamanio size
	//ej: size = 10 dara un numero entre 0 y 9
	//si el numero es muy grande lo convierte en un numero valido para la array
	return(hash_value % size);
}
