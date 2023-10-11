#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - pointer function to select the correct function
 * @s: operator used to determine the operation
 *
 * Return: returns pointer to function or NULL if operator
 * is not found
 */
int(*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
