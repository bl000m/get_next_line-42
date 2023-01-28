/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:37:31 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/26 12:28:36 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}	t_list;

char		*get_next_line(int fd);
int			check_eol(t_list *stash);
void		ft_add_pattern(t_list **lst, char *buffer, int characters);
int			ft_line_size(t_list *record);
t_list		*ft_lstlast(t_list *lst);
size_t		ft_strlen(const char *str);

#endif
