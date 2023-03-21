#include <stdio.h>

/**
 * main - a program that computes and prints the
 * sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 * Return: returns a succes(0)
 */
int main(void)
{
	unsigned long int m3, m5, sum;
	int i;

	m3 = 0;
	m5 = 0;
	sum = 0;

	for (i = 0; i < 1024, ++i)
	{
		if ((i % 3) == 0)
		{
			m3 = m3 + i;
		} else if ((i % 5) == 0)
		{
			m5 = m5 + i;
		}
	}
	sum = m3 + m5;
	printf("%lu\n", sum);
	return (0);
}
