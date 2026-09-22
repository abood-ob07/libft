/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:47:35 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/15 11:30:55 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy(char *join, char const *str, size_t *i)
{
	size_t	n;

	n = 0;
	while (str[n])
	{
		join[*i] = str[n];
		n++;
		(*i)++;
	}
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	s1;
	size_t	s2;
	char	*join;

	if (!str1 || !str2)
		return (NULL);
	s1 = ft_strlen(str1);
	s2 = ft_strlen(str2);
	join = malloc(s1 + s2 + 1);
	if (!join)
		return (NULL);
	i = 0;
	ft_copy(join, str1, &i);
	ft_copy(join, str2, &i);
	join[i] = '\0';
	return (join);
}
