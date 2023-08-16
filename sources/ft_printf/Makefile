SRCS	= ft_printf.c ft_putchar.c \
		  ft_putstr.c ft_print_digit.c \
		  ft_print_digit_u.c ft_print_lower_hex.c \
		  ft_print_upper_hex.c ft_print_point.c 
			
NAME	= libftprintf.a
OBJS	= $(SRCS:.c=.o)
CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -I -lm
LIBC	= ar -rcs

# Colors #
GREEN	=	\e[32m
YELLOW	=	\e[33m
RESET	=	\e[0m
_SUCCESS	=	✅ $(GREEN)Successfully compiled$(RESET)
_INFO		=	ℹ️  $(YELLOW)Info$(RESET)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
		@$(LIBC) $(NAME) $(OBJS)

all:	$(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		@$(RM) $(NAME)

re:	fclean all


.PHONY:	all clean fclean re

