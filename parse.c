/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:06:42 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/06 19:39:27 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_pslist **stack)
{
	lst_clear(stack);
	ft_printf("Error\n");
	exit (1);
}

bool	selector(char **argv)
{
	// ft_strncmp(argv[1], "--simple") == 0 if match
	if (!ft_strncmp(argv[1], "--simple", ft_strlen(argv[1])))
	{
		return (true);
	}
	else if (!ft_strncmp(argv[1], "--complex", ft_strlen(argv[1])))
	{
		return (true);
	}
	else if (!ft_strncmp(argv[1], "--adaptive", ft_strlen(argv[1])))
	{
		return (true);
	}
	else if (!ft_strncmp(argv[1], "--bench", ft_strlen(argv[1])))
	{
		return (true);
	}
	else
		return (false);
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

int	only_num(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	duplicates(char **argv, int index, long current_num)
{
	index++;
	while (argv[index])
	{
		if (current_num == ft_atol(argv[index]))
			return (0);
		index++;
	}
	return (1);
}

void	parse(int argc, char **argv, t_pslist **stack)
{
	int		index;
	long	current_num;

	if (selector(argv))
		index = 2;
	else
		index = 1;
	while (index < argc)
	{
		current_num = ft_atol(argv[index]);
		if (!only_num(argv[index]))
			error(stack);
		if (!duplicates(argv, index, current_num))
			error(stack);
		if (current_num < INT_MIN || current_num > INT_MAX)
			error(stack);
		add_back(stack, lst_new(ft_atoi(argv[index])));
		index++;
	}
}

int	main(int argc, char **argv)
{
	t_pslist	*stack_a;
	int			i;

	i = 1;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	parse(argc, argv, &stack_a);
	t_pslist *temp = stack_a;
	while (temp)
	{
		ft_printf("%d\n", temp->number);
		temp = temp->next;
	}
	lst_clear(&stack_a);
	return (0);
}
