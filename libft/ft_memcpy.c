/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:25:50 by jodehii           #+#    #+#             */
/*   Updated: 2026/07/31 16:18:17 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destt;
	unsigned char	*srct;
	size_t			i;

	i = 0;
	destt = (unsigned char *)dest;
	srct = (unsigned char *)src;
	while (i < n)
	{
		destt[i] = srct[i];
		i++;
	}
	return (dest);
}

// void	arr_print(char	*arr)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%c", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	char	arr[] = {'a', 'b', 'c', 'd'};
// 	char	arr1[] = {'d', 'c', 'b', 'a'};

// 	char	arr2[] = {'a', 'b', 'c', 'd'};
// 	char	arr3[] = {'d', 'c', 'b', 'a'}; 

// 	arr_print(arr);
// 	arr_print(arr1);
// 	arr_print(arr2);
// 	arr_print(arr3);
// 	ft_memcpy(arr, arr1, 2);
// 	arr_print(arr);
// 	arr_print(arr2);
// }
