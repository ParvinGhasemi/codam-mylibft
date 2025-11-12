/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:28:18 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/12 21:25:56 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	print_hex(int x_char, unsigned int num)
{
	char	*hex_chars;
	int		count;
	if (x_char == 'X')
		hex_chars = "0123456789ABCDEF";
	else if (x_char == 'x')
		hex_chars = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += print_hex(x_char, num / 16);
	count += print_character(hex_chars[num % 16]);
	return (count);
}