/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bysong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:02:22 by bysong            #+#    #+#             */
/*   Updated: 2022/02/06 21:07:52 by bysong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r_x;
	int	r_y;

	r_y = 0;
	while (++r_y <= y && x > 0)
	{
		r_x = 0;
		while (++r_x <= x)
		{
			if ((r_x == 1 && r_y == 1))
				ft_putchar('/');
			else if ((r_x == x && r_y == 1) || (r_x == 1 && r_y == y))
				ft_putchar('\\');
			else if ((r_x == x && r_y == y))
				ft_putchar('/');
			else if (((1 < r_x) && (r_x < x)) && (r_y == 1 || r_y == y))
				ft_putchar('*');
			else if (((1 < r_y) && (r_y < y)) && (r_x == 1 || r_x == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
