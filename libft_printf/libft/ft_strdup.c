/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:20:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/16 19:22:56 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*s2;

	i = 0;
	len = ft_strlen(s1);
	s2 = ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

// int	main(void)
// {
// 	const char	*hi = "applebees!";
// 	char		*str;

// 	str = ft_strdup(hi);
// 	printf("pointer to original str : %p\n", &hi);
// 	printf("str : %s\n", hi);
// 	printf("pointer to dup str : %p\n", str);
// 	printf("dup str : %s\n", str);
// 	free (str);
// }
