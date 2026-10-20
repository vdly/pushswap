/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 20:11:55 by jodehii           #+#    #+#             */
/*   Updated: 2026/07/30 15:42:25 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	int				i;
// 	unsigned char	*p;

// 	i = 0;
// 	p = s;
// 	while (i < n)
// 	{
// 		p[i] = c;
// 		i++;
// 	}
// 	return (p);
// }