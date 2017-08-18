/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 14:43:38 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/16 15:34:40 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_merge(int *values, int *left, int *right, size_t n)
{
	size_t	li;
	size_t	ri;
	size_t	vi;
	size_t	l_size;
	size_t	r_size;

	li = 0;
	ri = 0;
	vi = 0;
	l_size = n / 2;
	r_size = n - l_size;
	while (vi < n)
	{
		if (li < l_size && (ri >= r_size || left[li] <= right[ri]))
			values[vi] = left[li++];
		else
			values[vi] = right[ri++];
		vi++;
	}
}

void		ft_mergesort(int *values, size_t n)
{
	size_t	i;
	size_t	mid;
	int		*left;
	int		*right;

	if (n < 2)
		return ;
	i = 0;
	mid = n / 2;
	left = (int *)ft_memalloc(mid);
	right = (int *)ft_memalloc(n - mid);
	while (i < n)
	{
		if (i < mid)
			left[i] = values[i];
		else
			right[i - mid] = values[i];
		i++;
	}
	ft_mergesort(left, mid);
	ft_mergesort(right, n - mid);
	ft_merge(values, left, right, n);
}
