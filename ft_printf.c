/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pamohamm <pamohamm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/10 18:04:53 by pamohamm      #+#    #+#                 */
/*   Updated: 2025/11/12 12:16:55 by parvinm.gha   ########   odam.nl         */
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
		print_character(va_arg(args, int));
	else if (character == 's')
		print_string(va_arg(args, char *));
	else if (character == 'p')
		ft_putchar_fd(va_arg(args, void *), 1); //??? unsigned int
	else if (character == 'd' || character == 'i')
		ft_putchar_fd(va_arg(args, int), 1); //???
	else if (character == 'u')
		ft_putcr_fd(va_arg(args, unsigned int), 1); //???
	else if (character == 'x')
		ft_putchar_f(va_arg(args, unsigned int), 1); //???
	else if (character == 'X')
		ft_putchar_f(va_arg(args, unsigned int), 1); //???
	else if (character == '%')
		ft_putchar_f(va_arg(args, char), 1); //???
	else
		return (-1);
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
	if (str == NULL)
		return (failed);
	i = 0;
	final_len = 0;
	while (str[i])
	{
		if (str[i] == '%' && !ft_strchr("cspdiuxX%", str[i + 1]))
			return (failed);
		else if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
			final_len += find_format(&str[i + 1], args);
		else
			final_len = final_len + (int)write(1, &str[i + 1], 1);
		i++;
	}
	va_end(args);
	return (final_len);
}
