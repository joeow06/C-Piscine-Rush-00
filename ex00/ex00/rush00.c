/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnulhaki <wnulhaki@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:40:36 by wnulhaki          #+#    #+#             */
/*   Updated: 2024/03/17 15:55:13 by wnulhaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int width, int left, int middle, int right)
{
	int	empty_length;

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

void	rush(int width, int height)
{
	int	empty_height;

	empty_height = 1;
	if (width > 0 && height > 0)
	{
		print_line(width, 'o', '-', 'o');
	}
	while (empty_height < height - 1 && width > 0)
	{
		print_line(width, '|', ' ', '|');
		empty_height++;
	}
	if (height > 1 && width > 0)
	{
		print_line(width, 'o', '-', 'o');
	}
}
