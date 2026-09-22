/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobeida <abobeida@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 17:10:55 by abobeida          #+#    #+#             */
/*   Updated: 2026/09/13 13:21:19 by abobeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*ptr;

	if (n != 0 && s > (size_t)-1 / n)
		return (NULL);
	ptr = malloc(n * s);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * s);
	return (ptr);
}
