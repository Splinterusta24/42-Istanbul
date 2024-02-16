#include <unistd.h>

void maff_alpha()
{
	int i;

	i = 65;
	while(i <= 90)
	{
		if(i%2==0)
			write(1,&i,1);
		else
		{
			i += 32;
			write(1,&i,1);
			i -=32;
		}
		i++;
	}
}

int main()
{
	maff_alpha();
}
