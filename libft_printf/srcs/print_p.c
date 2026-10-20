/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 00:25:51 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/17 01:36:09 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	pointer(uintptr_t ptr, char *hexa)
{
	int	len;

	len = 0;
	if (ptr < 16)
		return (print_c(hexa[ptr]));
	else
	{
		len += pointer(ptr / 16, hexa);
		return (len + pointer(ptr % 16, hexa));
	}
	return (len);
}

int	print_p(uintptr_t ptr, char *hexa)
{
	if (!((void *)ptr))
		return (print_s("(nil)"));
	else
	{
		write(1, "0x", 2);
		return (pointer(ptr, hexa) + 2);
	}
}
