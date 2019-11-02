/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:42:01 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/11/01 19:08:37 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

char				*remain(char *remainder, char **line)
{
	char			*p_n;

	p_n = NULL;
	if (remainder)
	{
		if ((p_n = ft_strchr(remainder, '\n')))
		{
			*p_n = '\0';
			*line = ft_strdup(remainder);
			ft_strcpy(remainder, ++p_n);
		}
		else
		{
			*line = ft_strdup(remainder);
			ft_strclr(remainder);
		}
	}
	else
	{
		*line = ft_strnew(1);
	}
	return (p_n);
}

int					get_line(int fd, char **line, char **remainder)
{
	char			buf[BUFF_SIZE + 1];
	int				byte;
	char			*p_n;
	char			*tmp;

	if ((read(fd, buf, 0) < 0) || BUFF_SIZE <= 0)
		return (-1);
	p_n = remain(*remainder, line);
	while (!p_n && (byte = read(fd, buf, BUFF_SIZE)))
	{
		buf[byte] = '\0';
		if ((p_n = ft_strchr(buf, '\n')))
		{
			*p_n = '\0';
			p_n++;
			*remainder = ft_strdup(p_n);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buf);
		free(tmp);
	}
	return (byte || ft_strlen(*remainder) || ft_strlen(*line)) ? 1 : 0;
}

t_new_list			*new_element(int fd)
{
	t_new_list		*new;

	new = (t_new_list *)malloc(sizeof(t_new_list));
	new->fd = fd;
	new->remainder = NULL;
	new->next = NULL;
	return (new);
}

int					get_next_line(const int fd, char **line)
{
	static t_new_list	*head;
	t_new_list			*tmp;

	if (fd < 0 || !line)
		return (-1);
	if (head == NULL)
		head = new_element(fd);
	tmp = head;
	while (tmp->fd != fd)
	{
		if (tmp->next == NULL)
			tmp->next = new_element(fd);
		tmp = tmp->next;
	}
	return (get_line(tmp->fd, line, &tmp->remainder));
}
