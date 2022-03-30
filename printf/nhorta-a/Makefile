# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhorta-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 11:27:15 by nhorta-g          #+#    #+#              #
#    Updated: 2022/03/30 12:32:04 by nhorta-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

INCS_DIR	= ./include

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
INCS		= -I$(INCS_DIR)
LIB			= ar -rcs
RM			= /bin/rm -f

SRC_DIR		= ./srcs
SRCS		= $(SRC_DIR)/ft_printf.c \
			$(SRC_DIR)/ft_print_hex.c \
			$(SRC_DIR)/ft_print_num.c \
			$(SRC_DIR)/ft_print_ptr.c\
			$(SRC_DIR)/ft_print_unsigned.c
			

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB)	$(NAME) $(OBJS)

.c.o: 		
			$(CC) $(CFLAGS) $(INCS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
