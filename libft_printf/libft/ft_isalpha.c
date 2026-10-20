/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:32:34 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/14 17:37:29 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));
// 	printf("ft_isalpha('7') = %d\n", ft_isalpha('7'));
// 	printf("ft_isalpha('!') = %d\n", ft_isalpha('!'));
// 	return (0);
// }