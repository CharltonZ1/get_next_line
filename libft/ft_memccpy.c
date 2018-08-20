/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:02:37 by chadams           #+#    #+#             */
/*   Updated: 2018/05/29 22:30:27 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			counter;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	counter = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (counter < n)
	{
		*tmp_dst = *tmp_src;
		if (*tmp_src == (unsigned char)c)
		{
			++tmp_dst;
			return (tmp_dst);
		}
		++tmp_dst;
		++tmp_src;
		++counter;
	}
	return (NULL);
}
