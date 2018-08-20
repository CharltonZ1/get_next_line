/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 15:02:21 by chadams           #+#    #+#             */
/*   Updated: 2018/05/30 09:22:05 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	unsigned char	*tmp_s;
	size_t			index;

	tmp_s = (unsigned char *)s;
	index = 0;
	while (tmp_s[index] != '\0')
	{
		ft_putchar(tmp_s[index]);
		++index;
	}
}
