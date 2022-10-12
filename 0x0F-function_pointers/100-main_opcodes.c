#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byt, m;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (m = 0; m < byt; m++)
	{
		if (m == byt - 1)
		{
			printf("%02hhx\n", arr[m]);
			break;
		}
		printf("%02hhx ", arr[m]);
	}
	return (0);
}
