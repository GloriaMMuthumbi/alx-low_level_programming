#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdarg.h>

/**
 * struct list_struct - defines list_t stucture
 */
typedef struct list_struct
{
	char *str;
	size_t len;
	struct list_struct *next;
} list_t;


int _printf(const char *format, ...);
size_t print_list(const list_t *h);

#endif
