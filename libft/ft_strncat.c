/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:52:06 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 18:04:50 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	dest_len;
	size_t	src_len;

	index = 0;
	dest_len = ft_strlen(s1);
	src_len = ft_strlen(s2);
	while (index <= src_len || index <= dest_len)
	{
		if (n < 1)
			break ;
		s1[dest_len + index] = s2[index];
		++index;
		--n;
	}
	return (s1);
}
