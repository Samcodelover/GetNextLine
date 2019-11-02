/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 14:21:38 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/10/07 16:26:43 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen(s);
	while (j-- && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		if (j < i)
			return (ft_strcpy((char *)malloc(sizeof(char) + 8), ""));
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (0);
	while (i <= j)
	{
		str[k++] = s[i++];
	}
	str[k] = '\0';
	return (str);
}
