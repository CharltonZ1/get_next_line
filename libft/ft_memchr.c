/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:47:29 by chadams           #+#    #+#             */
/*   Updated: 2018/05/30 00:28:05 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	size_t			count;

	tmp_s = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (*tmp_s == (unsigned char)c)
			return (tmp_s);
		++tmp_s;
		++count;
	}
	return (NULL);
}
