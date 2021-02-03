/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdos-san <jdos-san@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:08:25 by jdos-san          #+#    #+#             */
/*   Updated: 2020/11/30 20:14:27 by jdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int count2;
	int temp;

	count2 = 0;
	while (count2 <= size - 1)
	{
		count = 0;
		while (count <= size - 1)
		{
			if (tab[size - count] < tab[size - count - 1])
			{
				temp = tab[size - count - 1];
				tab[size - count - 1] = tab[size - count];
				tab[size - count] = temp;
			}
			count++;
		}
		count2++;
	}
}

void	ft_sort_int_tab(int *tab, int size);

int        main(void)
{
    int array[] = {60, 10, 87, 71, 94};
    int size;

    size = 5;

    ft_sort_int_tab(array, size);

    int count = 0;

    while (count < size)
    {
        printf(" %d ", array[count]);
        count++;
    }

    return (0);
}

