/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:24:25 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/20 17:27:02 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char	to_uppercase(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*original = "hello";
// 	char	*result;

// 	result = ft_strmapi(original, to_uppercase);
// 	if (result)
// 	{
// 		printf("Input:	\"%s\"\n", original);
// 		printf("Output:   \"%s\"\n", result);
// 		printf("Expected: \"HELLO\"\n");
// 		free(result);
// 	}
// 	return (0);
// }
