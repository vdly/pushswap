/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:21:40 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/27 05:36:56 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	if (s1[i] != '\0')
		return (1);
	return (0);
}

long	ft_atol(const char *str)
{
	long long	result;
	int			sign;
	int			i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign == 1)
			result = result * 10 + (str[i] - '0');
		else
			result = result * 10 - (str[i] - '0');
		i++;
	}
	return ((long)result);
}

int	sorted(t_list *stack)
{
	stack = stack->next;
	while (stack)
	{
		if (stack->prev->index > stack->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}
