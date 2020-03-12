/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caractere.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:24:52 by lsudre-r          #+#    #+#             */
/*   Updated: 2020/02/10 15:25:04 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int get_int_len(int value)
{
	int l = 1;
	while(value > 9)
	{
		l++; 
		value /= 10;
	}
	return l;
}

int print_int(int val, char *buffer, int pos)
{
    char s[30];
    int i;
	i = 0;
    while(val)
    {
		if(val < 0)
		{
			val =~ val + 1;
		}
        s[i++] = val % 10 + '0';
        val /= 10;
    }
    i--;
    if(pos + i > 4096)
    {
        write(1, buffer, 4096);
        pos = 0;
    }
    while(i >= 0)
        buffer[pos++] = s[i--];
    return(pos);
}

int print_uint(unsigned int val, char *buffer, int pos)
{
    char s[30];
    int i;
	i = 0;
    while(val)
    {
        s[i++] = val % 10 + '0';
        val /= 10;
    }
    i--;
    if(pos + i > 4096)
    {
        write(1, buffer, 4096);
        pos = 0;
    }
    while(i >= 0)
        buffer[pos++] = s[i--];
    return(pos);
}

int print_strchar(char *s, int i, char *buffer)
{
    while(*s)
    {
        if(i==4096)
        {
            write(1, buffer, 4096);
            i = 0;
        }
        buffer[i++]=*s++;
    }
    return(i);
}

char	*ft_itoa(int n)
{
	char			*ret;
	size_t			len;
	int				sign;
	unsigned int	nb;

	sign = (n < 0) ? 1 : 0;
	if (sign == 1)
		nb = -n;
	else
		nb = n;
	len = get_int_len(nb) + sign;
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret == NULL)
		return (NULL);
	ret[len] = '\0';
	while (len-- > (unsigned int)sign)
	{
		ret[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == 1)
		ret[len] = '-';
	return (ret);
}

int print_char(int c, int i, char *buffer)
{
    char a;
    if(i==4096)
    {
        write(1, buffer, 4096);
        i = 0;
    }
    a = *ft_itoa(c);
	buffer[i] = c;
    i++;
    return(i);
}

int print_percent(int i, char *buffer)
{
	char a;
    if(i==4096)
    {
        write(1, buffer, 4096);
        i = 0;
    }
    a = 37;
	buffer[i] = a;
    i++;
    return(i);
}

// void *print_ptr(void ptr, int i, char *buffer)
// {
//     while(*ptr)
//     {
//         if(i==4096)
//         {
//             write(1, buffer, 4096);
//             i = 0;
//         }
//         buffer[i++]=*ptr++;
//     }
//     return(i);
// }

void ft_printf(const char * format ,...)
{
    char buffer[4096];

    va_list list;
    va_start(list,format);
    char ch;
    char *s;
    char c;
    unsigned int u;
    int val;
    void *ptr;
    int i = 0;
    while((ch=*format))
    {
        if(i == 4096)
        {
            write(1, buffer, 4096);
            i = 0;
        }
        if(ch == '%')
        {
            ch = *++(format);
            if(ch == '%')
            {
                c = va_arg(list, int);
                i = print_percent(i, buffer);
            }
            if(ch == 'd' || ch == 'i')
            {
                val = va_arg(list, int);
                i = print_int(val, buffer, i);
            }
            if(ch == 's')
            {
                s = va_arg(list, char *);
                i = print_strchar(s, i, buffer);
            }
            if(ch == 'c')
            {
                c = va_arg(list, int);
                i = print_char(c, i, buffer);
            }
            if(ch == 'u')
            {
				u = va_arg(list, unsigned int);
				i = print_uint(u, buffer, i);
            }
            // if(ch == 'p')
            // {
            //     ptr = va_arg(list, void);
            //     i = print_ptr(ptr, i, buffer);
            // }
        } 
        else buffer[i++] = ch;
        format++;
    }
    va_end(list);
    write(1, buffer, i);
}

int main()
{
	unsigned int u = 4294775945;
	int c = 56;
    int c1 = 45;
	int a=10;
	int* ptr =&a;
    // ft_printf("Hello %% %s %s %u %c %%", "sdsd", "kishore", u, c);
    write(1, "\n", 1);
    printf("Hello %% %.09s %s %u %c %% %p", "sdsd", "kishore", u, c, ptr);
	write(1, "\n", 1);
	printf("%.09s", "kishore");
    return 0;
}
