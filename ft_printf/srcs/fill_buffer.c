#include "printf.h"

void	fill_buffer(t_buffer *buffer, char c)
{
	if(buffer->i == BUFFER_SIZE)
	{
		write(1, buffer->buf, BUFFER_SIZE);
		buffer->i = 0;
		ft_bzero(buffer->buf, BUFFER_SIZE);
	}
	buffer->buf[buffer->i] = c;
	buffer->i++;
	buffer->size++;
}


