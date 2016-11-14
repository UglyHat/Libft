/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:25:11 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/14 19:55:27 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*array;

	i = 0;
	if (!(s) || !(f))
		return (NULL);
	while (s[i])
		++i;
	if (!(array = (char*)malloc((i + 1) * sizeof(char))))
		return (NULL);
	array[i] = '\0';
	i = 0;
	while (s[i])
	{
		array[i] = f(i, s[i]);
		++i;
	}
	return (array);
}
