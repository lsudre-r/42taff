
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (n != 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		n--;
		i++;
	}
	return (dest);
}

static char		*ft_strdup(const char *s)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(s) + 1;
	dst = malloc(size);
	if (dst == NULL)
		return (NULL);
	return (ft_memcpy(dst, s, size));
}

static char			*ft_strjoin(char const *s1, char const *s2)
{
	int				size;
	unsigned int	i;
	char			*dst;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1 || !s2)
		return (!s1 ? ft_strdup(s2) : ft_strdup(s1));
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(dst = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (*s1 != '\0')
		dst[i++] = *s1++;
	while (*s2 != '\0')
		dst[i++] = *s2++;
	dst[i] = '\0';
	return (dst);
}

