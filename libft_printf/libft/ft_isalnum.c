/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:17:59 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/12 18:22:29 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_alnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_alnum('a') = %d\n", ft_alnum('a'));
// 	printf("ft_alnum('7') = %d\n", ft_alnum('7'));
// 	printf("ft_alnum('!') = %d\n", ft_alnum('!'));
// 	return (0);
// }
