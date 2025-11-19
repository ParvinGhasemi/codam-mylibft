/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   char_handler.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pamohamm <pamohamm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/11 15:42:09 by pamohamm      #+#    #+#                 */
/*   Updated: 2025/11/15 09:32:36 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

/**
 * @brief Prints a single character to the standard output.
 *
 * The print_character() function writes the character 'c' to the
 * standard output (file descriptor 1) using the write(2) system call.
 *
 * @param c The character to print.
 * @return (int) The number of bytes written (always 1).
 */
int	print_character(char c)
{
	return ((int)write(1, &c, 1));
}

/**
 * @brief Prints a string to the standard output.
 *
 * The print_string() writes the string 'str' to the standard
 * output (file descriptor 1). If 'str' is NULL, it prints "(null)" instead.
 *
 * @param str The string to print.
 * @return (int) The number of bytes written.
 */
int	print_string(char *str)
{
	if (str == NULL)
		str = "(null)";
	return ((int)write(1, str, ft_strlen(str)));
}

/**
 * @brief Prints an unsigned long integer in lowercase hexadecimal format.
 *
 * The pf_putnbr_hex() function recursively prints the hexadecimal
 * representation of the given unsigned long integer 'num' using
 * lowercase letters. It is a helper function for printing pointers
 * and hexadecimal values in printf-like functions.
 *
 * @param num The unsigned long integer to print in hexadecimal.
 * @return (int) The total number of characters printed.
 */
int	pf_putnbr_hex(unsigned long num)
{
	char	*hex_chars;
	int		printed;

	hex_chars = "0123456789abcdef";
	printed = 0;
	if (num >= 16)
		printed += pf_putnbr_hex(num / 16);
	printed += (int)write(1, &hex_chars[num % 16], 1);
	return (printed);
}

/**
 * @brief Prints a memory address (pointer) in hexadecimal format.
 *
 * The print_pointer() function prints the pointer 'ptr' in hexadecimal
 * format, prefixed with "0x". If 'ptr' is NULL, it prints "(nil)" instead.
 *
 * @param ptr The pointer to print.
 * @return (int) The total number of characters printed.
 */
int	print_pointer(void *ptr)
{
	// int				i;
	int				printed;
	unsigned long	address;

	if (ptr == NULL)
		return (print_string("(nil)"));
	printed = (int)write(1, "0x", 2);
	address = (unsigned long)ptr;
	printed += pf_putnbr_hex(address);
	return (printed);
}

// int	main(void)
// {
// 	char	*str = NULL;
// 	void	*ptr = NULL;
// 	char	*addr = "hi";

// 	printf("main: %s\n", str);
// 	print_string(str);
// 	printf("\n\n");

// 	printf("main:	%p\n", ptr);
// 	print_pointer(ptr);
// 	printf("\n\n");

// 	int	main = printf("%p", addr);
// 	printf("\n");
// 	int	mine = print_pointer(addr);
// 	printf("\nmain: %d	vs	mine: %d", main, mine);
// 	printf("\n\n");

// 	int percent = print_percent();
// 	printf("\nshould see one: %d", percent);
// 	printf("\n\n");

// 	char *str_num = ft_itoa(-1369);
// 	int integer = print_string(str_num);
// 	free(str_num);

// 	printf("\nshould see 5: %d", integer);
// 	printf("\n\n");

// 	return (0);
// }