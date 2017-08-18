/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 08:55:03 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/11 09:52:34 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	const char		*cpy_src;
	unsigned char	*cpy_dest;
	unsigned char	cpy_c;

	i = 0;
	cpy_c = (unsigned char)c;
	cpy_src = src;
	cpy_dest = dest;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		if (cpy_dest[i] == cpy_c)
			return (&cpy_dest[i + 1]);
		i++;
	}
	return (NULL);
}
