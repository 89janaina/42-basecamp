/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdos-san <jdos-san@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:19:05 by jdos-san          #+#    #+#             */
/*   Updated: 2020/11/25 22:57:07 by jdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char		parameter;

	if (n >= 0)
	{
		parameter = 'P';
	}
	else
	{
		parameter = 'N';
	}
	write(1, &parameter, sizeof(parameter));
}
