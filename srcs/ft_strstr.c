/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 03:12:07 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/07 05:22:26 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *big, char const *little)
{
	int		index;
	int		index2;

	index = 0;
	index2 = -1;
	if (!(little[index]))
		return ((char*)big);
	while (big[index])
	{
		if (big[index] == little[0])
			if (!(ft_strcmp(ft_strsub(big, index, ft_strlen(little)),
						little)) && index2 == -1)
				index2 = index;
		++index;
	}
	if (index2 == -1)
		return (NULL);
	return ((char*)(&big[index2]));
}
