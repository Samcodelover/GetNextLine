/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:34:59 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/10/09 21:59:20 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	if (!n)
		return (1);
	if (s1 && s2 && n)
	{
		i = 0;
		while (n > 0)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
			n--;
		}
		return (1);
	}
	return (0);
}
