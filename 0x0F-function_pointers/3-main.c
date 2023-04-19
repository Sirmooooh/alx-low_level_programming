#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num00, num01;
	char *op;

	if (!(argc == 4))
	{
		printf("Error\n");
		exit(98);
	}

	num00 = atoi(argv[1]);
	op = argv[2];
	num01 = atoi(argv[3]);

	if (!get_op_func(op) || op[1])
	{
		printf("Error\n");
		exit(99);
	}

	if ((num01 == 0) && ((*op == '/') || (*op == '%')))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num00, num01));
	return (0);
}
