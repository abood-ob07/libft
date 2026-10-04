/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:50:09 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/30 13:05:38 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	if (!s1 && !s2)
		return (0);
	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		++i;
		--n;
	}
	return (0);
}
