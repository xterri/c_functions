/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:46:44 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/10 19:13:11 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;
	size_t	hold;
	char	*haystack;
	char	*needle;

	i = 0;
	haystack = (char *)big;
	needle = (char *)little;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		hold = i;
		while (haystack[hold++] == needle[j++])
		{
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
