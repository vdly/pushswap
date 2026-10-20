/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 21:33:28 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/17 17:38:30 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_x(unsigned int dec, char *hexa)
{
	int		len;

	len = 0;
	if (dec < 16)
		return (print_c(hexa[dec]));
	else
	{
		len += print_x(dec / 16, hexa);
		return (len + print_x(dec % 16, hexa));
	}
}
