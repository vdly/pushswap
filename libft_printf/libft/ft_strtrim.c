/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:12:47 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/18 12:43:18 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	end = len;
	while (start < len && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

// int	main()
// {
// 	char	str[] = "   i would like some peace n quiet    ";
// 	char	set[] = " ";

// 	printf("test:%s|\n", ft_strtrim(str, set));
// }
