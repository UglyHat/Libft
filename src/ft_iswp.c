/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlecas <tlecas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 00:07:02 by tlecas            #+#    #+#             */
/*   Updated: 2018/04/10 16:06:13 by tlecas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswp(int c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	return (0);
}