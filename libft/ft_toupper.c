/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:55:02 by jodehii           #+#    #+#             */
/*   Updated: 2026/07/27 18:25:05 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	printf("ft_toupper('a') = %c\n", ft_toupper('a'));
// 	printf("ft_toupper('A') = %c\n", ft_toupper('A'));
// 	printf("ft_toupper(' ') = %c\n", ft_toupper(' '));
// 	return (0);
// }
