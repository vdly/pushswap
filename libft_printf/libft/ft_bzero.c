/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 22:58:16 by jodehii           #+#    #+#             */
/*   Updated: 2026/07/29 23:36:16 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	arr[] = {'a', 'b', 'c', 'd'};
// 	char	arr1[] = {'a', 'b', 'c', 'd'};
// 	int i = 0;
// 	while (i < 4)
// 	{
// 		printf("%c\n", arr[i]);
// 		printf("%c\n", arr1[i]);
// 		i++;
// 	}
// 	ft_bzero(arr, 4);
// 	bzero(arr1, 4);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%c\n", arr[i]);
// 		printf("%c\n", arr1[i]);
// 		i++;
// 	}

// }
