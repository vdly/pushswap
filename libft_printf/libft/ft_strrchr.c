/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 20:08:14 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/07 20:17:30 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		i;

	if (!s)
		return (NULL);
	temp = (char *)s;
	i = ft_strlen(temp);
	while (i >= 0)
	{
		if (temp[i] == c)
			return (temp + i);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[11] = "watermelon";

// 	printf("e pointer : %p\n", &s[6]);
// 	printf("ft_strchr : %p\n", ft_strrchr(s, 'e'));
// }
