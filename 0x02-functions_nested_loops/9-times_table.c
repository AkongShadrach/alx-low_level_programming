#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * created: Shadrach_Akong
 * cc: 6 July, 2022
 */

void times_table(void)
{
	int ii, jj, mul;

	for (ii = 0; ii <= 9; ii++)
	{
		for (jj = 0; jj <= 9; jj++)
		{
			mul = ii * jj;
			if (jj == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			if (jj < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
