#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints program name, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
=======
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
>>>>>>> 70c540a006600779db61c000a743edd2fc4018b1
}
