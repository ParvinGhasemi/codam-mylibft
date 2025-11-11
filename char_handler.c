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
	unsigned long address;
	int		printed;

	printed = 0;
	write(1, "0x", 2);
	printed += 2;
	return (printed);
}

// int main()
// {
// 	void *p = NULL;
// 	printf("%p\n", p);
// 	printf("%p\n", NULL);
// 	print_pointer(p);
// }
