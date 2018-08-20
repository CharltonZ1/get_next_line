/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:33:25 by chadams           #+#    #+#             */
/*   Updated: 2018/06/06 08:27:27 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int i;
	int sign;
	int nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	if (s == '\0')
		return (0);
	while (ft_isspace(s[i]))
		++i;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			sign = -1;
	while (s[i] >= '0' && s[i] <= '9')
		nbr = (nbr * 10) + (s[i++] - '0');
	return (nbr * sign);
}
