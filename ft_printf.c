int     ft_hunter(va_list box, const char map)
{
    int     index;

    index = 0;
    if (map == 'c')
    {
        char c = va_arg(box, int);
        index += ft_putchar(c);
    }
    else if (map == 's')
    {
        char s = va_arg(box, * char);
        index += ft_putstr(s);
    }
    else if (map == 'd' || map == 'i')
    {
        int d = va_arg(box, int);
        index += ft_putnbr(d);
    }
    else if (map == 'u')
    {
        char u = va_arg(box, unsigned int);
        index += ft_putnbr_p(u);
        //não aceita negativo e o range é maior, verificar isso!
    }
    else if (map == 'x')
    {
        char x = va_arg(box, unsigned int);
        index += ft_hexadecimal(x)
        //tem que converter base de 10 para base 16 (minusculo para maiusculo)
    }
    else if (map == 'p')
    {
        char p = va_arg(box, unsigned long);
        index += ft_ptr(p);
    }
    else
    {
        write(1, map[index], 1);
    }
    return(index);
}


int printf(const char *format, ...)
{
    va_list     list;
    int         i;
    int         total_n;

    va_start(list, format);
    i = 0;
    total_n = 0;
    while(format[i])
    {
        if (format[i] == '%')
        {
            i++;
            total_n += ft_hunter(list, format[i]);
        }
        else 
            total_n += ft_putchar(format[i]);
        i++;
    }
        va_end (list);
        return (total_n);
    }
}