/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 11:17:40 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/11 10:21:16 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cpy_c;
	unsigned char	*cpy_src;

	i = 0;
	cpy_c = (unsigned char)c;
	cpy_src = (unsigned char *)s;
	while (i < n)
	{
		if (cpy_src[i] == cpy_c)
			return (&cpy_src[i]);
		i++;
	}
	return (NULL);
}
