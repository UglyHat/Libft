/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:29:50 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/13 22:00:27 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	size_t i;
	size_t limit;
	size_t i2;

	i = 0;
	i2 = 0;
	limit = ft_strlen((char*)s2);
	while (s1[i])
		++i;
	while (i2 < n && s2[i2])
	{
		if (i2 < limit)
			s1[i] = s2[i2];
		++i2;
		++i;
	}
	s1[i] = '\0';
	return (s1);
}
