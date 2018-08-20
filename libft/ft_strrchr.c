/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:07:09 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 18:17:31 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int index;

	index = ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == (unsigned char)c)
		{
			break ;
		}
		--index;
	}
	if (index == 0)
		return ((char *)s);
	while ((*s != '\0') && (index >= 0))
	{
		++s;
		--index;
		if (index == 0)
		{
			return ((char *)s);
		}
	}
	return (NULL);
}
