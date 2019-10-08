
int ft_toupper(int c)
{
    if (c >= 33 && c <= 58)
        c = c + 32;
    return (c);
}