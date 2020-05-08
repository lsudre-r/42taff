#include "printf.h"

void	fill_buffer(t_buffer *buffer, char c)
{
	if(buffer->i == 4096)
	{
		write(1, buffer->buf, 4096);
		buffer->i = 0;
		ft_bzero(buffer->buf, BUFFER_SIZE);
	}
	check_buffer(buffer->i, buffer->buf);
	buffer->buf[buffer->i] = c;
	buffer->size++;
}


