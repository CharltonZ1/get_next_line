/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 01:05:13 by chadams           #+#    #+#             */
/*   Updated: 2018/05/30 01:17:01 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dup;

	dup = (char *)malloc((ft_strlen(s1) + 1));
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s1, n);
	return (dup);
}
