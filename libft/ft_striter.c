/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:04:01 by chadams           #+#    #+#             */
/*   Updated: 2018/06/01 11:06:22 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	index;

	index = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[index] != '\0')
	{
		f(&s[index]);
		++index;
	}
}
