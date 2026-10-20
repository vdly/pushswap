/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:54:58 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/12 18:04:26 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	printf("ft_tolower('a') = %c\n", ft_tolower('a'));
// 	printf("ft_tolower('A') = %c\n", ft_tolower('A'));
// 	printf("ft_tolower(' ') = %c\n", ft_tolower(' '));
// 	return (0);
// }
