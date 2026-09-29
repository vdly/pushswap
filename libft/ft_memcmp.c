/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 19:13:52 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/22 19:43:37 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1t;
	unsigned char	*s2t;
	size_t			i;

	s1t = (unsigned char *)s1;
	s2t = (unsigned char *)s2;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n)
	{
		if (s1t[i] != s2t[i])
			return (s1t[i] - s2t[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[15] = "melon";

// 	printf("s1 : %s\n", s1);
// 	printf("ft_memcmp : %d\n", ft_memcmp(s1, "melzn", 5));
// }
