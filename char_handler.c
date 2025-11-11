#include "libft/libft.h"
#include "ft_printf.h"

int	print_character(char c)
{
	return ((int)write(1, &c, 1));
}
