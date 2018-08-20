/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:10:44 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 18:14:00 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	size_t			count;
	int				ret;

	if (!s1 || !s2)
		return (0);
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	count = 0;
	while ((*tmp_s1 == *tmp_s2) && (count < (n - 1)))
	{
		++tmp_s1;
		++tmp_s2;
		++count;
	}
	ret = *tmp_s1 - *tmp_s2;
	return (ret);
}
