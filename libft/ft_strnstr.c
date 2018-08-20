/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:27:27 by chadams           #+#    #+#             */
/*   Updated: 2018/06/01 10:16:55 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;

	if (*needle == '\0')
		return ((char *)haystack);
	index = 0;
	while (*haystack && len)
	{
		if (*haystack == needle[index])
			++index;
		else
			index = 0;
		if (needle[index] == '\0')
			return ((char *)(haystack - index + 1));
		++haystack;
		--len;
	}
	return (NULL);
}
