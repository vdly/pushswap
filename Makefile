# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/27 12:22:14 by jodehii           #+#    #+#              #
#    Updated: 2026/10/07 16:03:43 by jodehii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar -rcs

SRCS = 	libft_printf/libft/ft_isalpha.c libft_printf/libft/ft_toupper.c \
		libft_printf/libft/ft_isdigit.c libft_printf/libft/ft_tolower.c \
		libft_printf/libft/ft_isalnum.c libft_printf/libft/ft_strchr.c \
		libft_printf/libft/ft_isascii.c libft_printf/libft/ft_strrchr.c \
		libft_printf/libft/ft_isprint.c libft_printf/libft/ft_strncmp.c \
		libft_printf/libft/ft_strlen.c libft_printf/libft/ft_memchr.c \
		libft_printf/libft/ft_memset.c libft_printf/libft/ft_memcmp.c \
		libft_printf/libft/ft_bzero.c libft_printf/libft/ft_strnstr.c \
		libft_printf/libft/ft_memcpy.c libft_printf/libft/ft_atoi.c \
		libft_printf/libft/ft_memmove.c libft_printf/libft/ft_strlcpy.c \
		libft_printf/libft/ft_strlcat.c libft_printf/libft/ft_calloc.c \
		libft_printf/libft/ft_strdup.c libft_printf/libft/ft_substr.c \
		libft_printf/libft/ft_strjoin.c libft_printf/libft/ft_strtrim.c \
		libft_printf/libft/ft_strmapi.c libft_printf/libft/ft_striteri.c \
		libft_printf/libft/ft_itoa.c libft_printf/libft/ft_split.c \
		libft_printf/libft/ft_putchar_fd.c libft_printf/libft/ft_putnbr_fd.c \
		libft_printf/libft/ft_putstr_fd.c libft_printf/libft/ft_putendl_fd.c \
		libft_printf/libft/ft_lstnew.c libft_printf/libft/ft_lstadd_front.c \
		libft_printf/libft/ft_lstsize.c libft_printf/libft/ft_lstlast.c \
		libft_printf/libft/ft_lstadd_back.c libft_printf/libft/ft_lstdelone.c \
		libft_printf/libft/ft_lstclear.c libft_printf/libft/ft_lstiter.c \
		libft_printf/libft/ft_lstmap.c libft_printf/ft_printf.c \
		libft_printf/srcs/print_c.c	libft_printf/srcs/print_dec.c \
		libft_printf/srcs/print_p.c	libft_printf/srcs/print_s.c \
		libft_printf/srcs/print_u.c	libft_printf/srcs/print_x.c \
		linked_lists/add_back.c linked_lists/add_front.c \
		linked_lists/del_one.c linked_lists/lst_clear.c \
		linked_lists/lst_last.c linked_lists/lst_new.c \
		linked_lists/lst_new.c linked_lists/lst_size.c
OBJ		= $(SRCS:.c=.o)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

all	: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re