#include <unistd.h>

void ft_putchar(char c);

void print_line(int width, int left, int middle, int right)
{
        int empty_length;

        empty_length = 1;
        if (width > 0)
        {
                ft_putchar(left);
        }
        while (empty_length < (width - 1))
        {
                ft_putchar(middle);
                empty_length++;
        }
        if (width > 1)
        {
                ft_putchar(right);
        }
        ft_putchar('\n');
}

void rush(int width, int height)
{
    if (width > 0 && height > 0)
    {
        print_line(width, 'o', '-', 'o');
    }
    for (int i = 1; i < height - 1 && width > 0; i++)
    {
        print_line(width, '|', ' ', '|');
    }
    if (height > 1 && width > 0)
    {
        print_line(width, 'o', '-', 'o');
    }
}
