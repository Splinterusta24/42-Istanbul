int	ft_fibonacci(int index)
{
	int	result;
	if (index == 0)
		return (0);
    else if (index == 1)
        return (1);
    if (index > 0)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index-2);
        return (result);
	}
	else
		return (-1);
}
#include <stdio.h>
int main()
{
    int x = ft_fibonacci(5);
    printf("%d", x);
}
