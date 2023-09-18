#include "main.h"
/**
 * rev_string - it reverses a string
 * @s: the string to be reversed
 *
 * Return: returns nothing
 */
#include "main.h"

void rev_string(char *s)
{
	int l = 0;
	int st = 0;
	int e = 0;
	char temp;
	
	while (s[l] != '\0')
		l++;
	
	e = l - 1;
	
	while (st < e)
	{
		temp = s[st];
		s[st] = s[e];
		s[e] = temp;
		
		st++;
		e--;
	}
	
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	
	s -= l;
	
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	
	_putchar('\n');
}
