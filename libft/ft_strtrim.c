/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 14:51:47 by chadams           #+#    #+#             */
/*   Updated: 2018/06/06 11:59:51 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start_count(char const *s)
{
	int	start;

	start = 0;
	while (ft_isspace(s[start]))
		++start;
	return (start);
}

static int	end_count(char const *s)
{
	int	len;

	len = ft_strlen(s) - 1;
	while (ft_isspace(s[len]))
		--len;
	return (len);
}

char		*ft_strtrim(char const *s)
{
	char	*new_str;
	int		len;
	int		start;
	int		index;

	if (!s)
		return (NULL);
	index = 0;
	len = end_count(s);
	start = start_count(s);
	if (start > len)
	{
		new_str = (char *)malloc(sizeof(char) * 1);
		bzero(new_str, 1);
		return (new_str);
	}
	new_str = (char *)malloc(sizeof(char) * (len - start) + 2);
	if (new_str == NULL)
		return (NULL);
	bzero(new_str, (len - start) + 2);
	while (start <= len)
		new_str[index++] = s[start++];
	return (new_str);
}
