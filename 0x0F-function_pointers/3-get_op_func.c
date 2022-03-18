#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user.
 * @s: is the operator passed as argument to the program.
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x = 0;

	while (ops[x].op != NULL)
	{
		if (strcmp(ops[x].op, s) == 0)
		{
			return (ops[x].f);
		}
		i++;
	}
	return (NULL);
}
