#include <stdio.h>
/*
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Alwayas 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
