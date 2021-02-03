/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdos-san <jdos-san@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:27:57 by jdos-san          #+#    #+#             */
/*   Updated: 2020/11/22 15:20:44 by jdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		length;
	int		width;

	length = 1;
	while (length <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((width == 1 && length == 1) || (width == x && length == 1))
				ft_putchar('o');
			else if ((width == x && length == y) || (width == 1 && length == y))
				ft_putchar('o');
			else if ((width > 1 && width < x) && (length == 1 || length == y))
				ft_putchar('-');
			else if ((length > 1 && length < y) && (width == 1 || width == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
