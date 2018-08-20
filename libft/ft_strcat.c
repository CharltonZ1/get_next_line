/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:57:16 by chadams           #+#    #+#             */
/*   Updated: 2018/06/25 23:54:23 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	index;
	size_t	index_2;

	index = 0;
	while (s1[index])
		index++;
	index_2 = 0;
	while (s2[index_2])
	{
		s1[index] = (char)s2[index_2];
		index++;
		index_2++;
	}
	s1[index] = '\0';
	return (s1);
}
