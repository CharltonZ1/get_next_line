/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:27:14 by chadams           #+#    #+#             */
/*   Updated: 2018/06/03 12:56:37 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	index = 0;
	while (n > 0 && tmp_s1[index] != '\0' && tmp_s1[index] == tmp_s2[index])
	{
		++index;
		--n;
	}
	if (n == 0)
		return (0);
	return (tmp_s1[index] - tmp_s2[index]);
}
