#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there is a digit
 * @str: array string.
 *
 * Return: 0 is (Success)
 */
int check_num(char *str)
{
	/*Declare vars*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count str*/

	{
		if (!isdigit(str[count])) /*check if str there is digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of program
 * @argc: Count arguments
 * @argv: Arguments vector
 *
 * Return:  0 is (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
