/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:22:27 by chadams           #+#    #+#             */
/*   Updated: 2018/06/04 17:37:36 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nbwords(char const *s, char c)
{
	int	nb_words;
	int	i;

	i = 0;
	nb_words = 0;
	while (s && *(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			++i;
		if (*(s + i))
			nb_words++;
		while (*(s + i) && *(s + i) != c)
			++i;
	}
	return (nb_words);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	start;
	size_t	end;
	char	**ptr;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	ptr = NULL;
	if (!s)
		return (ptr);
	ptr = (char **)ft_memalloc(sizeof(char *) * (get_nbwords(s, c) + 1));
	while (get_nbwords(s, c) - i)
	{
		while (s && *(s + start) && *(s + start) == c)
			++start;
		while (s && *(s + start + end) && *(s + start + end) != c)
			++end;
		ptr[i] = ft_strsub(s, start, end);
		start += end;
		end = 0;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
