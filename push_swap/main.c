#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

typedef struct t_list
{
	int data;
	struct t_list* next;
} t_stack;

void	null_argument()
{
	write(2, "No argument\n", 12);
	exit(1);
}

void	string_argument()
{
	write(2, "String argument!\n", 17);
	exit(1);
}

void	enough_argument()
{
	write(2, "Not enough arguments\n", 21);
	exit(1);
}

void check_argument(char *argv)
{
	int i;

	i = 0;
	if (argv == NULL || argv[0] == '\0')
		null_argument();
	while (argv[i] != '\0')
	{
		while (argv[i] == ' ' || argv[i] == '\t' || argv[i] == '\v'
			|| argv[i] == '-' || argv[i] == '+')
			i++;
		if (!(argv[i] < '9' && argv[i] > '0') )
			string_argument();
		i++;
	}
}
t_stack *add_member(int num)
{
	t_stack* temp; 
	temp = (t_stack *)malloc(sizeof(t_stack));
	if (!temp)
		return NULL;
	temp->data = num;
	temp->next = NULL;
	return temp;
}

void add_members(t_stack *new, int num)
{	
	new->next = (t_stack *)malloc(sizeof(t_stack));
	new->next->data = num;
	new->next->next = NULL;
}

void split_number(char *argv, t_stack **a)
{
	int i;
	int num;
	int sign;

	i = 0;
	while (argv[i] != '\0')
	{
		num = 0;
		sign = 1;
		while (argv[i] == ' ' || argv[i] == '\t' || argv[i] == '\v')
				i++;
		if (argv[i] == '-' || argv[i] == '+')
			if (argv[i] == '-')
			{
				i++;
				sign *= -1;
			}
		while (argv[i] != '\0' && argv[i] != ' ' && argv[i] != '\t' && argv[i] != '\v')
			num = (num * 10) + (argv[i++] - '0');
		if (*a == NULL)
			*a = add_member(num * sign);
		else
			add_members(*a, (num * sign));
	}
}

int main()
{
	t_stack* root;
	int i;
	int argc = 2;
	char *argv[] = {"234 231 2", NULL};
	i = 0;
	if (argc < 2)
		enough_argument();
	else
	{
		while (argv[i] != NULL)
		{
			check_argument(argv[i]);
			split_number(argv[i], &root);
			i++;
		}
	}
	while (root != NULL)
	{
		printf("%d", root->data);
		root = root->next;
	}
}
