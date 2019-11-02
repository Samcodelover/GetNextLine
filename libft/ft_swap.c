/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:52:39 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/10/09 22:06:11 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *first_data, void *second_data, size_t size)
{
	unsigned char	*temp_data;

	temp_data = (unsigned char*)malloc(size * sizeof(unsigned char));
	if (temp_data == NULL)
		return ;
	ft_memmove(temp_data, first_data, size);
	ft_memmove(first_data, second_data, size);
	ft_memmove(second_data, temp_data, size);
	free(temp_data);
}
