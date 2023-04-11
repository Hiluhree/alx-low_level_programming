#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: The number of arguments supplied to the program
 * @argv: The pointer to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents, total_coins = 0;
	int coins25 = 0;
	int coins10 = 0;
	int coins5 = 0;
	int coins2 = 0;
	int coins1 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins25++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins10++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins5++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins2++;
		}
		else
		{
			cents -= 1;
			coins1++;
		}
	}
	total_coins = coins25 + coins10
			+ coins5 + coins2
			+ coins1;
	printf("%d\n", total_coins);

	return (0);
}
