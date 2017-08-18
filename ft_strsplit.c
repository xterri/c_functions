/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 09:08:14 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/16 15:38:36 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strsep(char const *s, int len, long i)
{
	char	*str;

	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
		str[len--] = s[i--];
	return (str);
}

static char	**ft_strsubsplit(char const *s, char **arr, int arr_len, char c)
{
	int		index;
	int		str_len;
	long	i;

	i = 0;
	index = 0;
	while (index < arr_len)
	{
		str_len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			str_len++;
		}
		if (s[i] == '\0' || s[i] == c)
			arr[index++] = ft_strsep(s, str_len, i - 1);
	}
	arr[index] = NULL;
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		arr_len;
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr_len = ft_strcount(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * arr_len + 1)))
		return (NULL);
	return (ft_strsubsplit(s, arr, arr_len, c));
}
