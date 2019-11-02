/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 20:34:12 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/10/09 21:58:15 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;
	char			c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	un = (unsigned int)n;
	if (un < 10)
	{
		c = un + '0';
		write(fd, &c, 1);
	}
	if (un >= 10)
	{
		ft_putnbr_fd(un / 10, fd);
		ft_putnbr_fd(un % 10, fd);
	}
}
