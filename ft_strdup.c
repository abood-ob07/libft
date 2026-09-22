/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 17:12:06 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/22 16:53:49 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	n;
	char	*copy;

	i = 0;
	n = ft_strlen(str);
	copy = malloc((n + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		++i;
	}
	copy[i] = '\0';
	return (copy);
}
