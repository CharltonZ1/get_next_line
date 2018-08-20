/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:39:22 by chadams           #+#    #+#             */
/*   Updated: 2018/05/29 17:20:07 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp_b;
	size_t			index;

	if (len == 0)
		return (b);
	temp_b = (unsigned char *)b;
	index = 0;
	while (index < len)
	{
		temp_b[index] = c;
		++index;
	}
	return (b);
}
