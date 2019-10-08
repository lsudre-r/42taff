
int ft_tolower(int c)
{
    if (c >= 1 && c <= 26)
        c = c + 32;
    return (c);
}