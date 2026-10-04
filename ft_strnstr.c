/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 09:55:55 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/24 18:39:11 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[0]);
	while (i < len)
	{
		j = 0;
		while (little[j] && i + j < len && little[j] == big[i + j])
			++j;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		++i;
	}
	return (NULL);
}
