/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:06:42 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/27 18:38:52 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(t_list **stack)
{
	lst_clear(stack);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	only_num(char *str)
{
	int	i;

	i = 0;
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

int	duplicates(t_list *stack, long current_num)
{
	while (stack)
	{
		if ((long)stack->number == current_num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

bool	selector(char **argv)
{
	if (!ft_strcmp(argv[1], "--simple"))
		return (true);
	else if (!ft_strcmp(argv[1], "--medium"))
		return (true);
	else if (!ft_strcmp(argv[1], "--complex"))
		return (true);
	else if (!ft_strcmp(argv[1], "--adaptive"))
		return (true);
	else if (!ft_strcmp(argv[1], "--bench"))
		return (true);
	else
		return (false);
}

void	parse(int argc, char **argv, t_list **stack)
{
	int		index;
	long	current_num;

	index = 1;
	if (!argv || !*argv)
		return ;
	while (index < argc && argv[index][0] == '-' && argv[index][1] == '-')
	{
		if (selector(argv)) // or selector(argv[index]) depending on your selector design
			index++;
		else
			error(stack);
	}
	while (index < argc)
	{
		if (!only_num(argv[index]))
			error(stack);
		current_num = ft_atol(argv[index]);
		if (current_num < INT_MIN || current_num > INT_MAX)
			error(stack);
		if (!duplicates(*stack, current_num))
			error(stack);
		add_back(stack, lst_new((int)current_num));
		index++;
	}
}

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;
// 	int			i;

// 	i = 1;
// 	stack_a = NULL;
// 	if (argc < 2)
// 		return (0);
// 	parse(argc, argv, &stack_a);
// 	t_list *temp = stack_a;
// 	while (temp)
// 	{
// 		ft_printf("%d\n", temp->number);
// 		temp = temp->next;
// 	}
// 	lst_clear(&stack_a);
// 	return (0);
// }
