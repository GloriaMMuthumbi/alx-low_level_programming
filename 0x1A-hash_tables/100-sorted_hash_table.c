#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 * Return: returns a pointer to the new sorted hash table.
 * otherwise NULL if error occurs
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_get - retrieves value of key in sorted hash table
 * @ht: hash table
 * @key: key to get value
 * Return: returns value associated with key. otherwise NULL if key is
 * not matched
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;
	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_set - adds element to sorted hash table
 * @ht: sorted hash table
 * @key: key to add - cannot be empty string
 * @value: value associated with key
 * Return: returns 1 others 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
	}
	else
	{
		current_node = ht->shead;
		while (current_node != NULL && strcmp(current_node->key, key) < 0)
			current_node = current_node->snext;
		if (current_node == NULL)
		{
			new_node->sprev = ht->stail;
			new_node->snext = NULL;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			new_node->sprev = current_node->sprev;
			new_node->snext = current_node;
			if (current_node->sprev != NULL)
				current_node->sprev->snext = new_node;
			else
				ht->shead = new_node;
			current_node->sprev = new_node;
		}
	}
	return (1);
}

/**
 * shash_table_print - prints the sorted hash table
 * @ht: sorted hash table
 * Return: returns nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints reverse order of sorted hash
 * table
 * @ht: sorted hash table
 * Return: returns nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table
 * Return: returns nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *current;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		current = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = current;
	}
	free(head->array);
	free(head);
}
