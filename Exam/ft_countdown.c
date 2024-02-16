#include <unistd.h>

void	ft_countdown()
{
	int i;

	i = 57;
	while (i >= 48)
	{
		write(1,&i,1);
		write(1,"\n",1);
		i--;
	}
}

int main()
{
	ft_countdown();
}
