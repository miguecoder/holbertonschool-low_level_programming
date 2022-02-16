#include "main.h"

/**
 * jack_bauer - print all minutes of the day of Jack Bauer.
 *
 * Return: hours in order
 */
void jack_bauer(void)
{
	int hours, minutes;

	hours = 0;

	/*Inicia en 00:00, termina en 23:59*/
	while (hours < 24)
	{
		minutes = 0; /*Se inicializa en 0 para cada ciclo*/
		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');/*Obtengo el primer digito de los minutos,*/
			/* ejm: 12/10 = 1,2 --> sin cifras decimales = 1*/
			_putchar((hours % 10) + '0');/*Obtengo el ultimo número del residuo,*/
			/*ejm: 12%10 = 2 --> con el paso anterio la hora ya queda en 12*/
			_putchar(':');
			_putchar((minutes / 10 + '0'));/*Obtengo el primer digito de los minutos,*/
			/*ejm: 35/10 = 3,5 --> sin cifras decimales = 3*/
			_putchar((minutes % 10 + '0'));/*Obtengo el ultimo número de los minutos*/
			/*con el residuo:35%10 = 5 --> los minutos quedan en 35*/
			_putchar('\n');
			minutes++; /*Aumento de los minuto de 1 a 1 hasta 59*/
		}
		hours++;/*Aumento de horas de 1 a 1 hasta 23*/
	}
}
