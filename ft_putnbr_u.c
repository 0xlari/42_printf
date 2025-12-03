#include <unistd.h>
int	ft_putnbr_u(unsigned int n)
{
	int     i;
    char    d;

    i = 0;
    if (n > 9)
	{
		i += ft_putnbr_u(n / 10);
		i += ft_putnbr_u(n % 10);
	}
	else
	{
		d = n + 48;
		i += write(1, &d, 1);
	}
    return (i);
}