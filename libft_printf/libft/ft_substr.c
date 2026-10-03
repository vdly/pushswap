/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:24:22 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/18 15:42:11 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// len = s_len - start; *to prevent allocating extra space in the heap 
//						than needed*
//						*only takes exactly what you need from the heap*

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((char *)ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*sub;

// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (NULL);
// 	if (len > ft_strlen(s))
// 		len = ft_strlen(s);
// 	sub = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!sub)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			sub[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	sub[j] = '\0';
// 	return (sub);
// }

// int	main(void)
// {
// 	printf("sub str from pineapple : %s\n", ft_substr("pineapple", 4, -2));
// }
