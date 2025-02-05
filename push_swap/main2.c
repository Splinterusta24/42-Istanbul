#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

int number_count(char *argv)
{
	int i;
	int nc;

	nc = 0;
	i = 0;
	while (argv[i])
	{
		while (argv[i] == ' ' || argv[i] == '\t' || argv[i] == '\v')
				i++;
		if (argv[i] == '-' || argv[i] == '+')
			i++;
		while (argv[i] >= '0' && argv[i] <= '9')
			i++;
		nc++;
	}
	return nc;
}

int split_number(char *argv)
{
	int nc;

	nc = 0;
	nc = number_count(argv);
	return (sign * num);
}

void is_digit(char *argv)
{
	int i;

	i = 0;
	if (argv == NULL || argv[0] == '\0')
	{
		printf("Null argument");
		exit(1);
	}
	while (argv[i] != '\0')
	{
		if (!((argv[i] < '9' && argv[i] > '0') 
			|| (argv[i] == ' ' || argv[i] == '\t')))
		{
			printf("enough arg");
			exit(1);
		}
		i++;
	}
}

int main(int argc, char** argv)
{
	int i = 1;
	int j = 0;

	int x = 0;
	x = split_char(argv[1]);
	j++;
	printf("%d", x);
}