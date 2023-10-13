#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
(* a
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, cont;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cont = atoi(argv[1]);
	if (cont < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < cont; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < cont - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
