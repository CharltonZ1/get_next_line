/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:18:11 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 17:29:58 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	int				len_num;
	size_t			len;

	len_num = n;
	len = 1;
	while (len_num /= 10)
		len++;
	num = n;
	if (n < 0)
	{
		num = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = num % 10 + '0';
	while (num /= 10)
		str[--len] = num % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
