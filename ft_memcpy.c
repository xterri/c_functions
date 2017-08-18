/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 08:29:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/16 11:57:47 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cpy_dest;
	const char	*cpy_src;

	if (dest == src || n == 0)
		return (dest);
	i = 0;
	cpy_src = src;
	cpy_dest = dest;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (cpy_dest);
}
