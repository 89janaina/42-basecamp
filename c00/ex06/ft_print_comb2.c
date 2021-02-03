/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdos-san <jdos-san@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:37:22 by jdos-san          #+#    #+#             */
/*   Updated: 2020/11/25 22:58:00 by jdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb2(int n1, int n2)
{
	char	c1;
	char	c2;

	c1 = (n1 - (n1 % 10)) / 10 + '0';
	c2 = n1 % 10 + '0';
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	c1 = (n2 - (n2 % 10)) / 10 + '0';
	c2 = n2 % 10 + '0';
	ft_putchar(c1);
	ft_putchar(c2);
	if (!(n1 == 98 && n2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	n2 = 0;
	while (1)
	{
		while (++n2 <= 99)
			ft_putcomb2(n1, n2);
		n1++;
		n2 = n1;
		if (n1 == 99)
			return ;
	}
}
