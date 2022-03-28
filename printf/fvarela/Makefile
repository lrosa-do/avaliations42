NAME = libftprintf.a
CC = gcc
CC_FLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c \
helpers/ft_printf_parse.c \
helpers/ft_printf_parse_c.c \
helpers/ft_printf_parse_s.c \
helpers/ft_printf_parse_p.c \
helpers/ft_printf_parse_d.c \
helpers/ft_printf_parse_u.c \
helpers/ft_printf_parse_s.c \
helpers/ft_printf_parse_x.c \
helpers/ft_printf_parse_pc.c \
helpers/ft_printf_parse_hexa.c

LIBFT = libft/libft.a

OBJS += $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp $(LIBFT) $(NAME) 
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)

so:
	$(CC) -fPIC $(CC_FLAGS) -shared $(SRCS)
	gcc -fPIC -shared -o libftprintf.so $(OBJS)

%.o: %.c
	@$(CC) -fPIC $(CC_FLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	@rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re