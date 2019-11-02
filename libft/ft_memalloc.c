/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 11:38:59 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/10/07 16:19:47 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*pm;

	pm = malloc(size);
	if (pm == NULL)
		return (NULL);
	ft_memset(pm, 0, size);
	return (pm);
}
