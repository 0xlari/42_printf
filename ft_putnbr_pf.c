# include "ft_printf.h"
int	ft_putnbr_pf(int n)
{
	int     i;
    char    d;
	long	number;

	number = n;
    i = 0;
	if (number < 0)
	{
		i += write (1, "-", 1);
		number = number * -1;
        i += ft_putnbr_pf(number);
	}
	else
	{
		if (number > 9)
		{
			i += ft_putnbr_pf(number / 10);
			i += ft_putnbr_pf(number % 10);
		}
		else
		{
			d = number + 48;
			i += write(1, &d, 1);
		}
	}
    return (i);
}