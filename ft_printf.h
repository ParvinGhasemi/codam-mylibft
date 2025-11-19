/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pamohamm <pamohamm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/08 16:56:15 by pamohamm      #+#    #+#                 */
/*   Updated: 2025/11/12 22:53:03 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const	char *str, ...);
int	print_character(char c);
int	print_string(char *str);
int	pf_putnbr_hex(unsigned long num);
int	print_pointer(void *ptr);
int	print_hex(int x_char, unsigned int num);
int	print_unsigned_int(unsigned int num);

#endif
