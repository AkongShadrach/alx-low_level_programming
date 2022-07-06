#include "main.h"

/**
 * _islower - Checks for lowercase character
 * created: Shadrach_Akong
 * cc: 6, July 2022
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
