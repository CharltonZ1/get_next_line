/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:02:34 by chadams           #+#    #+#             */
/*   Updated: 2018/06/01 14:10:11 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) + 1;
	while (len > 0)
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		++s;
		--len;
	}
	return (NULL);
}
