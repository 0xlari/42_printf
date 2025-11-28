#include <unistd.h>
int	ft_putnbr_pf(int n)
{
	int     i;
    char    d;

    i = 0;
	if (n == -2147483648)
    {
		write (1, "-2147483648", 11);
        return (11);
    }
	else if (n < 0)
	{
		write (1, "-", 1);
		n = n * -1;
        i += 1;
        i += ft_putnbr_pf(n);
	}
	else
	{
		if (n > 9)
		{
			i += ft_putnbr_pf(n / 10);
			i += ft_putnbr_pf(n % 10);
		}
		else
		{
			d = n + 48;
			write(1, &d, 1);
            i += 1;
		}
	}
    return (i);
}
#include <stdio.h>
int main(void)
{
    int number = -31;
    int contador;

    printf("Aqui esta o numero: ");

    contador = ft_putnbr_pf(number);

    printf("Aqui esta a quantidade que foi impresso: %d\n", contador);
    return (0);
}