/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 09:22:47 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/16 12:21:37 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cpy_dest;
	const unsigned char	*cpy_src;

	cpy_dest = dest;
	cpy_src = src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			cpy_dest[i] = cpy_src[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n--)
			cpy_dest[n] = cpy_src[n];
	}
	return (dest);
}
