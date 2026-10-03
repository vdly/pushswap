/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:43:48 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/17 17:38:03 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_check(char format, va_list arg)
{
	if (format == 'c')
		return (print_c(va_arg(arg, int)));
	if (format == 's')
		return (print_s(va_arg(arg, char *)));
	if (format == 'p')
		return (print_p(va_arg(arg, uintptr_t), "0123456789abcdef"));
	if (format == 'd' || format == 'i')
		return (print_dec(va_arg(arg, int)));
	if (format == 'u')
		return (print_u(va_arg(arg, unsigned int)));
	if (format == 'x')
		return (print_x(va_arg(arg, unsigned int), "0123456789abcdef"));
	if (format == 'X')
		return (print_x(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	if (format == '%')
		return (print_c('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
			len += print_check(*(++str), args);
		else
			len += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (len);
}
