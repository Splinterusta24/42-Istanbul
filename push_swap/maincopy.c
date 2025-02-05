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
	int i = 0;
	if (argv == NULL || argv[0] == '\0')
		null_argument();
	while (argv[i] != '\0')
	{
		while (argv[i] == ' ' || argv[i] == '\t' || argv[i] == '\v'
			|| argv[i] == '-' || argv[i] == '+')
			i++;
		if (!(argv[i] >= '0' && argv[i] <= '9')) 
			string_argument();
		i++;
	}
}

t_stack *add_member(int num)
{
	t_stack* temp = (t_stack *)malloc(sizeof(t_stack));
	if (!temp)
		return NULL;
	temp->data = num;
	temp->next = NULL;
	return temp;
}

void add_members(t_stack **head, int num)
{	
	t_stack *new = add_member(num);
	if (!new)
		return;
	
	if (*head == NULL) 
	{
		*head = new;
		return;
	}

	t_stack *temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

void split_number(char *argv, t_stack **a)
{
	int i = 0, num, sign;
	while (argv[i] != '\0')
	{
		num = 0;
		sign = 1;
		while (argv[i] == ' ' || argv[i] == '\t' || argv[i] == '\v')
			i++;
		if (argv[i] == '-' || argv[i] == '+')
		{
			if (argv[i] == '-')
				sign *= -1;
			i++;
		}
		while (argv[i] != '\0' && argv[i] >= '0' && argv[i] <= '9')
			num = (num * 10) + (argv[i++] - '0');
		add_members(a, num * sign);
	}
}

void print_list(t_stack *head)
{
	t_stack *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	t_stack* root = NULL;
	int i;
	int argc = 2;
	char *argv[] = {"234 231 2", NULL};

	if (argc < 2)
		enough_argument();
	else
	{
		i = 0;
		while (argv[i] != NULL)
		{
			check_argument(argv[i]);
			split_number(argv[i], &root);
			i++;
		}
	}

	print_list(root);
	
	// Bellek temizleme
	t_stack *temp;
	while (root != NULL)
	{
		temp = root;
		root = root->next;
		free(temp);
	}

	return 0;
}
