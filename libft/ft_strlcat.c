/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:38:49 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/08 15:38:50 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int my_strlcat(char *dest, char const *src, unsigned int buffer_size)
{
	unsigned int dest_base_size = strlen(dest);
	unsigned int i = 0;
	unsigned int const i_max = (buffer_size-1) - dest_base_size;
	while (src[i]!='\0' && i < i_max) {
		dest[dest_base_size+i] = src[++i];
	}
	dest[dest_base_size+i] = '\0';
	return dest_base_size+i;
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%u\n", my_strlcat(argv[1], argv[2], sizeof(argv[1])));
	printf("%zu", strlcat(argv[1], argv[2], sizeof(argv[1])));
	return 0;
}

/*size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}*/



unsigned int my_strlcat(char *dest, char const *src, unsigned int buffer_size)
{
	unsigned int dest_base_size = strlen(dest);
	unsigned int i = 0;
	unsigned int const i_max = (buffer_size-1) - dest_base_size;
	while (src[i]!='\0' && i < i_max) {
		dest[dest_base_size+i] = src[++i];
	}
	dest[dest_base_size+i] = '\0';
	return dest_base_size+i;
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%u\n", my_strlcat(argv[1], argv[2], sizeof(argv[1])));
	printf("%zu", strlcat(argv[1], argv[2], sizeof(argv[1])));
	return 0;
}