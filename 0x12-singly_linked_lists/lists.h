#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdarg.h>

/**
 * struct list_t - defines list_t stucture
 * @str: element in string
 * @len: length of the list
 * @next: pointer to the next node
 */
typedef struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
} list_t;


int _printf(const char *format, ...);
size_t print_list(const list_t *h);

#endif
