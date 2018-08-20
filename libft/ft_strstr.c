/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:17:59 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 15:32:32 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len_n;

	if (!*needle)
		return ((char*)haystack);
	len_n = ft_strlen(needle);
	while (*haystack && ft_strncmp(haystack, needle, len_n))
		haystack++;
	if (*haystack)
		return ((char*)haystack);
	return (NULL);
}
