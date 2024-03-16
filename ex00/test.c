#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_f(int length, int left, int middle, int right)
{
	int empty_length;

	empty_length = 1;
	if (length > 0)
	{
		ft_putchar(left);
	}
	while (empty_length < length - 1)
	{
		ft_putchar(middle);
		empty_length++;
	}
	if (length > 0)
	{
		ft_putchar(right);
		ft_putchar('\n');
	}

}		

void	rush(int length, int height)
{ 
	int empty_height;

	empty_height = 1;
	if (length > 0 && height > 0)
	{
		print_f(length, 'o', '-', 'o');
	}
	while (empty_height < height - 1)
	{
		print_f(length, '|', ' ', '|');
		empty_height++;
	}
	if (height > 1)
	{
		print_f(length, 'o', '-', 'o');
	}
}

int	main()
{
	rush(2, 8);
	return (0);
}
