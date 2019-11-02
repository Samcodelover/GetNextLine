/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:47:20 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/09/28 15:14:43 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ps;
	char	*pd;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	ps = (char *)src;
	pd = (char *)dst;
	if (ps < pd)
		while ((int)(--n) >= 0)
			*(pd + n) = *(ps + n);
	else
		while (++i < n)
			*(pd + i) = *(ps + i);
	return (dst);
}
