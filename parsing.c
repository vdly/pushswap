/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:33:13 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/30 22:02:17 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists/linked.h"

int	is_valid(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	if (str[i] == '\0')
		return (0);
	if (str[i] == '-' || str[i] == '+')
		sign++;
	while (str[i])
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] == '-' || str[i] == '+')
			sign++;
		else
			return (0);
	}
	if (sign > 1)
		return (0);
}

int	parsing(char *str)
{
	int	sign;
	int	i;
	
	i = 0;
	sign = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!isnum(str[i]))
			return (0);
		else if (str[i] == '-' || str[i] == '+')
			sign++;
		i++;
	}
	if (sign > 1)
		return (0);
}
