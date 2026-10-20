/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:33:13 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 16:40:33 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int error(t_list *stack)
{
	lst_clear(&stack);
	ft_printf("Error\n");
	return (0);
}

int parse(int argc, char **argv, t_list **stack)
{
	int index;
	long current_num;

	index = 1;
	if (selector(argv))
		index++;
	while (index < argc)
	{
		current_num = ft_atol(argv[index]);
		if (!only_num(argv[index]))
			return (0);
		if (!duplicates(argv, index, current_num))
			return (0);
		if (current_num < INT_MIN || current_num > INT_MAX)
			return (0);
		index++;
	}

	return (1);
}

int selector(char **argv)
{
	int i;

	i = 0;
	if (ft_strncmp(argv[1], "--simple", ft_strlen(argv[1])))
	{
	}
	else if (ft_strncmp(argv[1], "--complex", ft_strlen(argv[1])))
	{
	}
	else if (ft_strncmp(argv[1], "--adaptive", ft_strlen(argv[1])))
	{
	}
	else if (ft_strncmp(argv[1], "--bench", ft_strlen(argv[1])))
	{
	}
	else
		return (0);
}

long ft_atol(char *str)
{
	int i;
	long result;
	int negative;

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

int only_num(char *str)
{
	int i;
	int sign;

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

int duplicates(char **argv, int index, long current_num)
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

// int	parsing(int argc, char **argv, t_list **stack_a)
// {
// 	int		index;
// 	long	current_num;

// 	index = 1;
// 	while (index < argc)
// 	{
// 		current_num = ft_atol(argv[index]);
// 		if (!only_num(argv[index]))
// 			return (0);
// 		if (!duplicates(argv, index, current_num))
// 			return (0);
// 		if (current_num < INT_MIN || current_num > INT_MAX)
// 			return (0);
// 		index++;
// 	}
// 	return (1);
// }

int main(int argc, char **argv)
{
	t_list *stack_a;
	int i;

	i = 1;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (!parsing(argc, argv, &stack_a))
	{
		lst_clear(&stack_a);
		ft_printf("Error\n");
		return (1);
	}
	else
		while (argv[i])
			add_back(&stack_a, lst_new(ft_atoi(argv[i++])));
	t_list *temp = stack_a;
	while (temp)
	{
		ft_printf("%d\n", temp->number);
		temp = temp->next;
	}
	lst_clear(&stack_a);
	return (0);
}
