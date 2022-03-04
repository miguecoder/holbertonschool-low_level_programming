#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: can be nuimber or otherthing
 *
 * Return: 1 if is c number and 0 in otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')/*las comillas sonpara que lo tome como número*/
	{/*No como codigo ASCII, si es ASCII escribirria c>=48 && c<=57 */
		return (1);
	}
	else
	{
		return (0);
	}
}
