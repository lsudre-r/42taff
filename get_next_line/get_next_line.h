/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:13:29 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/11/14 16:13:31 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 8
# define MAX_FD 1000

size_t			ft_strlen(const char *str);
void            *ft_memcpy(void *dest, const void *src, size_t n);
static char		*ft_strdup(const char *s);
static char		*ft_strjoin(char const *s1, char const *s2);
static int		gnl_verif_nline(char **stack, char **ligne);
static	int		gnl_read_file(int fd, char *heap, char **stack, char **ligne);
int				get_next_line(int const fd, char **line);

#endif
