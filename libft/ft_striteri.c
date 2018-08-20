/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:12:43 by chadams           #+#    #+#             */
/*   Updated: 2018/06/03 12:50:21 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	int				index;

	index = 0;
	i = 0;
	if (!s || !f)
		return ;
	while (s[index])
	{
		f(i, &s[index]);
		++i;
		++index;
	}
}
