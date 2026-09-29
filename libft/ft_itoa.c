/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:22:03 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/19 13:45:28 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digitz(int n)
{
	int	i;

	if (n < 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*convert;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = digitz(n);
	convert = malloc(sizeof(char) * digitz(n) + 1);
	if (!convert)
		return (NULL);
	convert[i] = '\0';
	if (n < 0)
	{
		convert[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		i--;
		convert[i] = (n % 10) + '0';
		n /= 10;
	}
	return (convert);
}

// int	main(void)
// {
// 	printf("itoa : %s\n", ft_itoa(2147483647));
// 	return (0);
// }
