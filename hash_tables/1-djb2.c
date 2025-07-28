/**
 *hash_djb2 - implementacion del algoritmo djb2
 *@str: cadena utilizada para generar el valor hash
 *Return: valor hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
