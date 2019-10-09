/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:20:45 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/08 16:20:47 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strrchr(const char *s, int c)
{
    int size;

    size = ft_strlen(s);
    while (s[size])
    {
        if (c == s[size])
            break;
        size--;
    }
    return (s + size);
}
