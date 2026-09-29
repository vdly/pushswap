/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 21:39:44 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/19 23:51:01 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//void	leon_test(unsigned int index, char *str)
// {
// 	printf("INDEX: %d\n", index);
// 	printf("STR: %s\n", str);
// 	printf("IM GIVEN: %s\n", str - index);
// }

// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return 0;
// 	ft_striteri(argv[1], leon_test);
// }
