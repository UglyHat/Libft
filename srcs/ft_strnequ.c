/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:02:48 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/14 20:02:53 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (!(s1) || !(s2))
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}
