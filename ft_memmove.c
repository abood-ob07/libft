/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 08:28:37 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/10 10:04:53 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d == s)
		return (dest);
	if (s > d)
	{
		ft_memcpy (dest, src, n);
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			--i;
			d[i] = s[i];
		}
	}
	return (dest);
}
