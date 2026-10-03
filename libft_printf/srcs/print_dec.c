/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 00:21:57 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/16 23:31:17 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_dec(int d)
{
	int		len;
	long	dec;

	len = 0;
	dec = (long)d;
	if (dec < 0)
	{
		dec *= -1;
		len++;
		print_c('-');
	}
	if (dec < 10)
		len += print_c(dec + '0');
	else
	{
		len += print_dec(dec / 10);
		len += print_dec(dec % 10);
	}
	return (len);
}
