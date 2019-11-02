/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:41:25 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/10/02 14:39:04 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = ft_nlength(n);
	if (!(str = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	str[j] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (i < j--)
	{
		str[j] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n = n / 10;
	}
	return (str);
}
