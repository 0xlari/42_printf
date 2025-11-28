int     ft_putchar_pf(int c)
{
    char    s;

    s = (char)c;
	write(1, &s, 1);
    return (1);
}