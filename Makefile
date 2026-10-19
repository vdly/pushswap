# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/27 12:22:14 by jodehii           #+#    #+#              #
#    Updated: 2026/10/03 21:32:05 by jodehii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = push_swap
CC      = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRCS    = simple.c \
		  disordermetric.c \
		  medium.c \
          $(wildcard operations/*.c) \
          $(wildcard linked_lists/*.c) \
          $(wildcard libft_printf/libft/*.c) \
          $(wildcard libft_printf/srcs/*.c) \

OBJ     = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re