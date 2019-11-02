/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 16:11:54 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/10/09 21:58:22 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	un;
	char			c;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	un = (unsigned int)n;
	if (un < 10)
	{
		c = un + '0';
		write(1, &c, 1);
	}
	if (un >= 10)
	{
		ft_putnbr(un / 10);
		ft_putnbr(un % 10);
	}
}
