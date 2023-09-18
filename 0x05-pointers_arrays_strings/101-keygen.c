#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stddef.h>

#define PASSWORD_LENGTH 8

/**
 * main - generates random valid passwords for the
 * program 101-crackme
 *
 * Return: returns 0
 */

int main()
{
	const char* charset = "abcdefghijklmnopqrstuvwxyz0123456789";
	char password[PASSWORD_LENGTH + 1];
	int charlength = strlen(charset);
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int randomIndex = rand() % charlength;
		password[i] = charset[randomIndex];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Generated Password: %s\n", password);

	return 0;
}
