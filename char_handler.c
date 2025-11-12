#include "libft/libft.h"
#include "ft_printf.h"

int	print_character(char c)
{
	return ((int)write(1, &c, 1));
}

int	print_string(char *str)
{
	int	len;

	if (str == NULL)
		str = "(null)";
	len = (int)ft_strlen(str);
	return ((int)write(1, str, len));
}

// int main()
// {
// 	char *str = NULL;
// 	printf("%s\n", str);
// 	print_string(str);
// }

int print_pointer(void *ptr)
{
	unsigned long	address;
	int				printed;

	if (ptr == NULL)
		return (print_string("(nil)"));
	printed += (int)write(1, "0x", 2);
	address = (unsigned long)ptr;
	printed += pf_putnbr_hex(address);
	return (printed);
}

int	pf_putnbr_hex(unsigned long num)
{
	char	*hex_digits;
	int		printed;

	hex_digits = "0123456789abcdef";
	printed = 0;
	if (num >= 16)
		printed += pf_putnbr_hex(num / 16);
	printed += write(1, &hex_digits[num % 16], 1);
	return (printed);
}

// int main()
// {
// 	void *p = NULL;
	// char *str = "hi";
// 	printf("%p\n", p);
// 	printf("%p\n", NULL);
// 	print_pointer(p);
	// printf("\n\nstr:	%p", str);
	// print_pointer(str);
// }
