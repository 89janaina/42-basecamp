/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdos-san <jdos-san@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:08:22 by jdos-san          #+#    #+#             */
/*   Updated: 2020/11/30 20:12:46 by jdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int n_count;
	int temp;

	count = 0;
	n_count = 1;
	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - n_count];
		tab[size - n_count] = temp;
		count++;
		n_count++;
	}
}

void	ft_rev_int_tab(int *tab, int size);

int        main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size;

    size = 11;

    ft_rev_int_tab(array, size);

    int count = 0;

    while (count < size)
    {
        printf(" %d ", array[count]);
        count++;
    }

    return (0);
}