/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:47:18 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/10/09 21:59:03 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(dst) < dstsize)
	{
		i = ft_strlen(dst);
		j = 0;
		while (src[j] && j < (dstsize - i - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
		return (i + ft_strlen(src));
	}
	else
		return (dstsize + ft_strlen(src));
}
