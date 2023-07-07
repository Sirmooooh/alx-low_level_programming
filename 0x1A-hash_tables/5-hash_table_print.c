#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int g;
	unsigned char c_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (g = 0; g < ht->size; g++)
	{
		if (ht->array[g] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			node = ht->array[g];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
