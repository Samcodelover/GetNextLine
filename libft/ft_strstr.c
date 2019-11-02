/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 21:41:41 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/09/28 10:40:53 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int j;
	unsigned int i;

	if (!*needle)
		return ((char*)haystack);
	j = 0;
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haystack[j + i] == needle[i])
				++i;
			if (needle[i] == '\0')
				return ((char*)&haystack[j]);
		}
		++j;
	}
	return (0);
}
