/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:06:42 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 16:35:07 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_pslist **stack)
{
	lst_clear(stack);
	ft_printf("Error\n");
	exit (1);
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

bool	selector(char **argv)
{
	// ft_strncmp(argv[1], "--simple") == 0 if match
	if (!ft_strcmp(argv[1], "--simple"))
	{
		return (true);
	}
	else if (!ft_strcmp(argv[1], "--complex"))
	{
		return (true);
	}
	else if (!ft_strcmp(argv[1], "--adaptive"))
	{
		return (true);
	}
	else if (!ft_strcmp(argv[1], "--bench"))
	{
		return (true);
	}
	else
		return (false);
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

// int	main(int argc, char **argv)
// {
// 	t_pslist	*stack_a;
// 	int			i;

// 	i = 1;
// 	stack_a = NULL;
// 	if (argc < 2)
// 		return (0);
// 	parse(argc, argv, &stack_a);
// 	t_pslist *temp = stack_a;
// 	while (temp)
// 	{
// 		ft_printf("%d\n", temp->number);
// 		temp = temp->next;
// 	}
// 	lst_clear(&stack_a);
// 	return (0);
// }
