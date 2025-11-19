/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   num_printer.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pamohamm <pamohamm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/11 16:28:18 by pamohamm      #+#    #+#                 */
/*   Updated: 2025/11/12 23:00:05 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	print_hex(int x_char, unsigned int num)
{
	char	*hex_chars;
	int		count;

	hex_chars = "0123456789abcdef";
	if (x_char == 'X')
		hex_chars = "0123456789ABCDEF";
	count = 0;
	if (num >= 16)
		count += print_hex(x_char, num / 16);
	count += print_character(hex_chars[num % 16]);
	return (count);
}

int	print_unsigned_int(unsigned int num)
{
	// char	*dec_digits;
	int		printed;

	// dec_digits = "0123456789";
	printed = 0;
	if (num >= 10)
		printed += print_unsigned_int(num / 10);
	printed += print_character((num % 10) + '0');
	return (printed);
}

// int main(void)
// {
// 	unsigned int	num = 4294967295; // Maximum value for unsigned int
// 	int				printed;

// 	printed = print_unsigned_int(num);
// 	print_character('\n');
// 	printf("Printed characters: %d\n", printed);
// 	int	main = printf("%u", num);
// 	printf("\nmain: %d\n", main);
// 	print_character('\n');

// 	return (0);
// }