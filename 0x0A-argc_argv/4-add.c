#include <stdio.h>
#include <stdlib.h> /*atoi*/
/**
 * main - program that adds positive numbers.
 * @argc: is a count of the arguments supplied to the program.
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/**
	 * Ciclo for para moverme entre las "filas" que
	 * componen al vector argv, empieza en 1, ya que
	 * argv[0] =  nombre del programa
	 */
	for (i = 1; i < argc ; i++)
	{
		/**
		 * Ciclo for para recorrer el contenido de cada "fila"
		 * en el vector argv
		 */
		for (j = 0; argv[i][j] ; j++)
		{
			/**
			 * Verificar si cada valor dentro de argv[i][j]
			 * está entre 0 y 9, en caso de que no, print
			 * Error y return 1.
			 */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		/**
		 * cada vez que el ciclo llegué a esta linea, indica
		 * que el contenido de la posicion i, j de argv es un digito,
		 * por tanto el contenido de argv[i] convertido a un entero
		 * con el comando atoi, debe entrar a la sumatoria.
		 */
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
