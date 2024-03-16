#include <unistd.h>

void	print_f(char c)
{
	write(1, &c, 1);
}

void	set(int x, int y)
{ 
	if (x > 0)
	{
		print_f ('o');
		while (x > 0)
		{
			print_f ('-');
			while (int space < 1)
				{
					
				}
			x--;
		}
	}
}

int	main()
{
	set(5, 5);
	return (0);
}
