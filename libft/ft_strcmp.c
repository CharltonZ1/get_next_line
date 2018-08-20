/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:08:55 by chadams           #+#    #+#             */
/*   Updated: 2018/06/01 09:35:07 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int				index;
	unsigned int	ret;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0') &&
			(s2[index != '\0']))
	{
		++index;
	}
	ret = (const unsigned char)s1[index] - (const unsigned char)s2[index];
	return (ret);
}
