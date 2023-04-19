#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -  function to add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  function tofind the difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  function to find multiplication of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the multiplication of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  function to find division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  function to find modulus two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the modulus of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
