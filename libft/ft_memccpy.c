/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:20:31 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/09/28 10:07:17 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*pd;
	unsigned char	*ps;

	ps = (unsigned char *)src;
	pd = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		if (pd[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
