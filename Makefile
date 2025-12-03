# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: labarros <0xlarissa.bf@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 13:04:57 by labarros          #+#    #+#              #
#    Updated: 2025/11/14 18:11:58 by labarros         ###   ########.fr        #
#                                                                              #
# *****************************************************************************#

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

MY_SOURCE = ft_printf.c \
			ft_putstr_pf.c \
			ft_putnbr_u.c \
			ft_putnbr_pf.c \
			ft_putchar_pf.c \
			ft_hexadecimal.c \
			ft_ptr.c

OBJ = $(MY_SOURCE:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)


fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
