/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:32:44 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/12 18:20:49 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isascii('a') = %d\n", ft_isascii('a'));
// 	printf("ft_isascii('7') = %d\n", ft_isascii('7'));
// 	printf("ft_isascii(128) = %d\n", ft_isascii(128));
// 	return (0);
// }
