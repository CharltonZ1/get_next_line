/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_memdel.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 14:06:40 by chadams           #+#    #+#             */
/*   Updated: 2018/06/23 14:24:35 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_memdel(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2 || s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_memdel((void *)&s1);
	ft_strcat(str, s2);
	return (str);
}
