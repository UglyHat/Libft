/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlecas <tlecas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 22:49:57 by tlecas            #+#    #+#             */
/*   Updated: 2018/04/10 16:06:12 by tlecas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countnb(int nb)
{
	int i;

	i = 0;
	while (nb /= 10)
		i++;
	return (i + 1);
}

char			*ft_itoa(int n)
{
	int		size;
	char	*tab;
	long	tmp;

	tmp = n;
	size = countnb(tmp);
	if (tmp < 0)
	{
		tmp = -tmp;
		size++;
	}
	if (!(tab = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	tab[size] = 0;
	tmp *= 10;
	while (tmp /= 10)
		tab[--size] = tmp % 10 + '0';
	if (tmp >= 0)
		tab[--size] = tmp + '0';
	if (n < 0)
		tab[0] = '-';
	return (tab);
}
