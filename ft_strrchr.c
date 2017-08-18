/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:08:01 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/12 11:52:30 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*cpy_s;

	i = ft_strlen(s);
	cpy_s = (char *)s;
	while (i > 0)
	{
		if (cpy_s[i] == c)
			return (&cpy_s[i]);
		i--;
	}
	if (cpy_s[i] == c)
		return (&cpy_s[i]);
	return (NULL);
}
