/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:23:29 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/22 16:55:23 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
// 	printf("ft_isdigit('7') = %d\n", ft_isdigit('7'));
// 	printf("ft_isdigit('!') = %d\n", ft_isdigit('!'));
// 	return (0);
// }
