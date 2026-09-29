/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:51:47 by jodehii           #+#    #+#             */
/*   Updated: 2026/07/27 17:53:46 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isprint(int c)
// {
// 	if (c >= 32 && c <= 126)
// 		return (1);
// 	return (0);
// }

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	printf("ft_isprint('a') = %d\n", ft_isprint('a'));
// 	printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
// 	printf("ft_isprint(2) = %d\n", ft_isprint(2));
// 	return (0);
// }
