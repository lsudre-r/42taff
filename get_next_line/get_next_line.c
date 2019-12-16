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

size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);


static int			gnl_verif_nline(char **stack, char **ligne)
{
	char			*tmp_stack;
	char			*strchr_stack;
	int				i;

	i = 0;
	strchr_stack = *stack;
	while (strchr_stack[i] != '\n')
		if (!strchr_stack[i++])
			return (0);
	tmp_stack = &strchr_stack[i];
	*tmp_stack = '\0';
	*ligne = ft_strdup(*stack);
	*stack = ft_strdup(tmp_stack + 1);
	return (1);
}

static	int			gnl_read_file(int fd, char *heap, char **stack, char **ligne)
{
	int				ret;
	char			*tmp_stack;

	while ((ret = read(fd, heap, BUFFER_SIZE)) > 0)
	{
		heap[ret] = '\0';
		if (*stack)
		{
			tmp_stack = *stack;
			*stack = ft_strjoin(tmp_stack, heap);
			free(tmp_stack);
			tmp_stack = NULL;
		}
		else
			*stack = ft_strdup(heap);
		if (gnl_verif_nline(stack, ligne))
			break ;
	}
	ret = ret > 0 ? 1 : ret;
	return (ret);
}

int					get_next_line(int const fd, char **line)
{
	static char		*stack[MAX_FD];
	char			*heap;
	int				ret;
	int				i;

	if (!line || (fd < 0 || fd >= MAX_FD) || (read(fd, stack[fd], 0) < 0) \
		|| !(heap = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1)))
		return (-1);
	if (stack[fd])
		if (gnl_verif_nline(&stack[fd], line))
			return (1);
	i = 0;
	while (i < BUFFER_SIZE)
		heap[i++] = '\0';
	ret = gnl_read_file(fd, heap, &stack[fd], line);
	free(heap);
	if (ret != 0 || stack[fd] == NULL || stack[fd][0] == '\0')
	{
		if (!ret && *line)
			*line = NULL;
		return (ret);
	}
	*line = stack[fd];
	stack[fd] = NULL;
	return (1);
}
