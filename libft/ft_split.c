/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 11:47:59 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/18 21:31:50 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wordcount(char const *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wc++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (wc);
}

size_t	wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	**temp;
	int		i;

	i = 0;
	split = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!split)
		return (NULL);
	temp = split;
	while (s[i])
	{
		if (s[i] != c)
		{
			*temp = ft_substr(s, i, wordlen(s + i, c));
			if (!(*temp))
				return (NULL);
			temp++;
			i = i + wordlen(s + i, c);
		}
		else
			i++;
	}
	*temp = 0;
	return (split);
}

// int	main(int argc, char **argv)
// {
// 	char	**split;
// 	size_t	i;

// 	i = 0;
// 	split = ft_split(argv[1], argv[2][0]);
// 	if (argc > 3)
// 		printf("only 2 args plz");
// 	while (i < wordcount(argv[1], argv[2][0]))
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// 	free (split);
// 	return (0);
// }
