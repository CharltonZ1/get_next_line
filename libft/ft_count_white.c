/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countWhite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 13:09:13 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 17:36:12 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_white(char *s)
{
	int	blanks;

	if (!s)
		return (0);
	blanks = 0;
	while (*s != '\0')
	{
		if (ft_isspace(*s) == 1)
			++blanks;
		++s;
	}
	return (blanks);
}
