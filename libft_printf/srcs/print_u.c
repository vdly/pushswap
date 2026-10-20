/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 00:39:19 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/15 22:38:29 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_u(unsigned int dec)
{
	int	len;

	len = 0;
	if (dec < 10)
		len += print_c(dec + '0');
	else
	{
		len += print_u(dec / 10);
		len += print_u(dec % 10);
	}
	return (len);
}
