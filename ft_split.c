/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:37:26 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/17 13:48:12 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char chr, char c)
{
	if (chr == c)
		return (1);
	return (0);
}

int	count(char const *s, char c)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (!is_sep(s[i], c) && (i == 0 || is_sep(s[i - 1], c)))
			counter++;
		i++;
	}
	return (counter);
}

char	*get_word(const char *con_ptr, char c)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (con_ptr[i] && !is_sep(con_ptr[i], c))
	{
		len++;
		i++;
	}
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = con_ptr[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**free_loc(char **result, int j)
{
	if (!result[j])
	{
		while (j)
		{
			j--;
			free(result[j]);
		}
		free(result);
		return (NULL);
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	result = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		if (!s[i])
			break ;
		result[j] = get_word(&s[i], c);
		if (!free_loc(result, j))
			return (NULL);
		while (s[i] && !is_sep(s[i], c))
			i++;
		j++;
	}
	result[j] = NULL;
	return (result);
}
