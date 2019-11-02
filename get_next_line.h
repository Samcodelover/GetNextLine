/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaiyrov <sbaiyrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:24:56 by sbaiyrov          #+#    #+#             */
/*   Updated: 2019/11/01 18:43:29 by sbaiyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct			s_new_list
{
	int					fd;
	char				*remainder;
	struct s_new_list	*next;
}						t_new_list;

char					*remain(char *remainder, char **line);
int						get_line(int fd, char **line, char **remainder);
t_new_list				*new_element(int fd);
int						get_next_line(const int fd, char **line);

#endif
