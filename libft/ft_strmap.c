/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:51:46 by chadams           #+#    #+#             */
/*   Updated: 2018/06/01 11:06:05 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_string;

	i = 0;
	if (s == '\0' || f == '\0')
		return (NULL);
	new_string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new_string[i] = f(s[i]);
		++i;
	}
	new_string[i] = '\0';
	return (new_string);
}
