/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:20:50 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 18:05:05 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	fill;

	ft_memcpy(dst, src, len);
	if (ft_strlen(src) < (len))
	{
		fill = (len - 1) - ft_strlen(src);
		while (fill > 0)
		{
			dst[ft_strlen(src) + fill] = '\0';
			--fill;
		}
	}
	return (dst);
}
