#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	return (0);
}


void	ft_putchar(char c);

void	print_line(int x, int left, int middle, int right)
{
	int	space;

	space = 1;
	if (x > 0)
	{
		ft_putchar(left);
	}
	while (space < (x - 1))
	{
		ft_putchar(middle);
		space++;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	space;

	space = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, 'o', '-', 'o');
	}
	while (space < y - 1 && x > 0)
	{
		print_line(x, '|', ' ', '|');
		space++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, 'o', '-', 'o');
	}
}
