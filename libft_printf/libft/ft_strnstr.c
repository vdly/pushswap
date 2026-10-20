/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:54:35 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/11 16:19:30 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (n == 0)
		return (0);
	while (i < n && big[i])
	{
		j = 0;
		while (little[j] == big[i + j] && little[j] && i + j < n)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	kiki[20] = "yummy apples yay";

// 	printf("pointer of a : %p\n", &kiki[6]);
// 	printf("ft_strnstr : %p\n", ft_strnstr(kiki, "app", 15));
// }
