/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:29:32 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/07 02:56:34 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	int i;
	int s;
	int x;

	i = 0;
	s = 1;
	x = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r')
		++i;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		s = -1;
		++i;
	}
	if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
		++i;
	while (str[i] <= '9' && str[i] >= '0')
	{
		x *= 10;
		x += (str[i] - '0');
		++i;
	}
	return (x * s);
}
