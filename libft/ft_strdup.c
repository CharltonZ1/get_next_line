/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:32:28 by chadams           #+#    #+#             */
/*   Updated: 2018/05/30 01:42:16 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = ft_strnew(ft_strlen(s1));
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s1, (ft_strlen(s1) + 1));
	return (dup);
}
