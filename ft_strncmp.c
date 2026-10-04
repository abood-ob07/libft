/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:27:10 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/30 13:16:00 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	if (!s1 && !s2)
		return (0);
	i = 0;
	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	while (n)
	{
		if (a[i] > b[i])
			return (a[i] - b[i]);
		else if (a[i] < b[i])
			return (a[i] - b[i]);
		if (a[i] == b[i] && a[i] == '\0')
			return (0);
		++i;
		--n;
	}
	return (0);
}
