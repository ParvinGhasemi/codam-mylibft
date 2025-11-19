/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pamohamm <pamohamm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/10 18:04:53 by pamohamm      #+#    #+#                 */
/*   Updated: 2025/11/15 09:30:50 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

/**
 * @brief 
 * 
 * @param str	the pointer to the immediate character after the '%' in the str.
 * @param args	list of arguments passed to our ft_printf function.
 * 				which is the same as the number of '%'s found in va_list args.
 * @return (int) the number of characters printed
 */
static int	find_format(char character, va_list args)
{
	int	len;

	len = 0;
	if (character == 'c')
		len += print_character(va_arg(args, int));
	else if (character == 's')
		len += print_string(va_arg(args, char *));
	else if (character == 'p')
		len += print_pointer(va_arg(args, void *));
	else if (character == 'd' || character == 'i')
	{
		char	*str = ft_itoa(va_arg(args, int));
		len += print_string(str);
		free(str);
	}
	else if (character == 'u')
		len +=print_unsigned_int(va_arg(args, unsigned int));
	else if (character == 'x')
		len += print_hex('x', va_arg(args, unsigned int));
	else if (character == 'X')
		len += print_hex('X', va_arg(args, unsigned int));
	else if (character == '%')
		len += print_character('%');
	return (len);
}

int	ft_printf(const	char *str, ...)
{
	int		i;
	int		failed;
	size_t	final_len;
	va_list	args;

	va_start(args, str);
	failed = -1;
	i = 0;
	final_len = 0;
	while (str[i])
	{
		if (str[i] == '%' && !ft_strchr("cspdiuxX%", str[i + 1]))
			return (failed);
		else if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			final_len += find_format(str[i + 1], args);
			i++;
		}
		else
			final_len += (int)write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (final_len);
}

// int main()
// {
// 	char *str = "hi";
	
// 	int main = printf("main: %p", str);
// 	printf("\n");
// 	int mine = ft_printf("mine: %p", str);
// 	printf("\n");
// 	printf("%d vs %d", main, mine);
// 	printf("\n\n");

// 	main = printf("main: %s", str);
// 	printf("\n");
// 	mine = ft_printf("mine: %s", str);
// 	printf("\n");
// 	printf("%d vs %d", main, mine);
// 	printf("\n\n");

// 	printf("%x\n", 987654321);
// 	ft_printf("%x\n", 987654321);
// 	printf("\n\n");

// 	return (0);
// }