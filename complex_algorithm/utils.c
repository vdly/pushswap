/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:21:40 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/22 21:53:27 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	return (0);
}

long	ft_atol(char *str)
{
	int		i;
	long	result;
	int		negative;

	i = 0;
	result = 0;
	negative = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * negative);
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

int	ft_sqt(unsigned int totalnumber)
{
	unsigned int	i;

	i = 0;
	while (i * i <= totalnumber)
		i++;
	return (i - 1);
}
