/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 08:30:17 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/17 10:08:50 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		len;
	long	n_cpy;
	char	*str;

	len = ft_digits(n);
	n_cpy = (long)n;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (n_cpy < 0)
	{
		str[0] = '-';
		n_cpy = -n_cpy;
	}
	str[len--] = (n_cpy % 10) + '0';
	while (n_cpy >= 10)
	{
		n_cpy /= 10;
		str[len--] = (n_cpy % 10) + '0';
	}
	return (str);
}
