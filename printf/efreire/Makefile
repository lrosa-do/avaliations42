# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efreire- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 13:59:56 by efreire-          #+#    #+#              #
#    Updated: 2021/12/29 14:00:00 by efreire-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= \
	ft_printf.c						libft/ft_putchar_fd.c			libft/ft_puthex_fd.c		\
	libft/ft_putnbr_fd.c			libft/ft_putnbr_unsigned_fd.c	libft/ft_putpointer_fd.c	\
	libft/ft_putstr_fd.c			libft/ft_strlen.c				helpers/get_num_len.c		\
	helpers/get_unsigned_num_len.c	helpers/handle_c.c				helpers/handle_i.c			\
	helpers/handle_p.c				helpers/handle_s.c				helpers/handle_u.c			\
	helpers/handle_x.c
OBJS	= $(SRCS:.c=.o)
INS		= ft_printf.h
NAME	= libftprintf.a
LIB		= ar rc
RL		= ranlib
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.$(INS)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)
	$(RL) $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader $(SRCS)
	norminette -R CheckDefine $(INS)

.PHONY: all re clean fclean
