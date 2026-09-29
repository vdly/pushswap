/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:04:29 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/19 23:53:00 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main(int argc, char **argv)
// {
// 	int	fd;

// 	fd = open("test.txt", O_RDWR);
// 	if (argc == 2)
// 		ft_putendl_fd(argv[1], fd);
// 	else
// 		printf("girl. enter valid input");
// 	return (0);
//  }
