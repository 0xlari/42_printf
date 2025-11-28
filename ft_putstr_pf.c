int	ft_putstr_pf(char *str)
{
	int	i;

	i = 0;
    if (!str)
        str = "(null)";
	while (str[i])
	{
		ft_putchar_pf(str[i]);
		i++;
	}
    return (i);
}