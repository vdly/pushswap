/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:19:25 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/22 20:08:34 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int	main(void)
// {
// 	char	src1[] = "Hello World";
// 	char	dest1[20] = {0};
// 	ft_memmove(dest1, src1, 12);
// 	printf("%s\n", dest1);

// 	// backward copy
// 	char	str2[] = "ABCDEFGHIJ";
// 	ft_memmove(str2 + 2, str2, 3);
// 	printf("Test 2 (Overlap dest > src): %s\n", str2);
// 	// Expected: ABABCDEF... (If it was memcpy, it might be AAAA...)

// 	char	str3[] = "ABCDEFGHIJ";
// 	ft_memmove(str3, str3 + 2, 3);
// 	printf("Test 3 (Overlap dest < src): %s\n", str3);
// 	// Expected: CDEFGHIJ...
// 	return (0);
// }
