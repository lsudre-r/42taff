/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:22:31 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/11/14 15:22:33 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int			gnl_fill_line(char **line, char **stack)
{
	int		i;
	char	*tmp;

	i = 0;
	while ((*stack)[i] && (*stack)[i] != '\n')
		++i;
	if ((*stack)[i] == '\n')
	{
		(*stack)[i] = '\0';
		*line = ft_strdup(*stack);
		tmp = ft_strdup(*stack + i + 1);
		free(*stack);
		*stack = tmp;
		if (**stack == '\0')
		{
			free(*stack);
			*stack = NULL;	
		}
		return (1);
	}
	else
	{
		if (!(*line = ft_strdup(*stack)))
			return (-1);
		free(*stack);
		*stack = NULL;
		return (0);
	}
}
static	int			gnl_verif_nline(char *buf)
{
	int		i;

	i = 0;
	while (*(buf + i))
	{
		if (*(buf + i) == '\n')
			return (i);
		++i;
	}
	return (0);
}

static	int			gnl_read_file(int fd, char *heap, char **stack, char **ligne)
{
	int				ret;
	char			*tmp_stack;

	while ((ret = read(fd, heap, BUFFER_SIZE)) > 0)
	{
		heap[ret] = '\0';
		tmp_stack = ft_strjoin(*stack, heap);
		free(*stack);
		*stack = tmp_stack;
		if (gnl_verif_nline(*stack))
			break ;
	}
	if (ret < 0)
		return (-1);
	if (!(*stack) && ret == 0)
	{
		if (!(*ligne = ft_strdup("")))
			return (-1);
		return (0);
	}
	return (gnl_fill_line(ligne, stack));
}

int					get_next_line(int const fd, char **line)
{
	static char		*stack[MAX_FD];
	char			*heap;
	int				ret;
	int				i;

	if (!line || (fd < 0 || fd >= MAX_FD) || (read(fd, stack[fd], 0) < 0)
		|| !(heap = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1)))
		return (-1);
	i = 0;
	while (i < BUFFER_SIZE)
		heap[i++] = '\0';
	ret = gnl_read_file(fd, heap, stack + fd, line);
	free(heap);
	return (ret);
}
