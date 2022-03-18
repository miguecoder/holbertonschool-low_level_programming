#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - function that return the sum
 * @a: number 1
 * @b: number 2
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that return the difference
 * between a and b
 * @a: number 1
 * @b: number 2
 * Return: The diference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that return the product of a and b
 * @a: number 1
 * @b: number 2
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that return the result of the division
 * of a and b
 * @a: number 1
 * @b: number 2
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n"), exit(100);
}

/**
 * op_mod - Function that return the remainder of
 * the division of a by b
 * @a: number 1
 * @b: number 2
 * Return: the remainder of division of a and b
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n"), exit(100);
}
