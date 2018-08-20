/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 12:46:37 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 17:47:09 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_all(char const *s)
{
	char	*new_str;
	int		new_len;
	int		index;

	index = 0;
	new_len = (ft_strlen(s) + 1) - (ft_count_white((char *)s));
	new_str = (char *)malloc(sizeof(char) * new_len);
	if (new_str == NULL)
		return (NULL);
	ft_bzero(new_str, new_len);
	while (*s)
	{
		while (ft_isspace(*s) == 1)
			++s;
		new_str[index] = *s;
		++s;
		++index;
	}
	return (new_str);
}
