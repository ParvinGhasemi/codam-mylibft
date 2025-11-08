NAME = libftprintf.a

LIBFT = libft/libft.a

LIBFT_PATH = libft

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

AR = ar
ARFLAGS = rcs

%.o: %.c $(LIBFT) ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@