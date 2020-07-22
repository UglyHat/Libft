/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coord_v.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlecas <tlecas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:20:15 by tlecas            #+#    #+#             */
/*   Updated: 2018/04/10 16:01:14 by tlecas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vect	coord_v(float x, float y, float z)
{
	t_vect v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}