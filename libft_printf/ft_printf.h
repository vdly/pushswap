/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:43:58 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/17 17:38:46 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	print_c(int c);
int	print_s(char *str);
int	print_dec(int dec);
int	print_u(unsigned int dec);
int	print_x(unsigned int dec, char *hexa);
int	print_p(uintptr_t ptr, char *hexa);

#endif