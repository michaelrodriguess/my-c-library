SRCS	= ./sources/ft_isalpha.c ./sources/ft_isdigit.c \
		./sources/ft_isalnum.c ./sources/ft_isascii.c \
		./sources/ft_isprint.c ./sources/ft_strlen.c \
		./sources/ft_memset.c ./sources/ft_bzero.c \
		./sources/ft_memcpy.c ./sources/ft_memmove.c \
		./sources/ft_strlcpy.c ./sources/ft_strlcat.c \
		./sources/ft_toupper.c ./sources/ft_tolower.c \
		./sources/ft_strchr.c ./sources/ft_strrchr.c \
		./sources/ft_strncmp.c ./sources/ft_memchr.c \
		./sources/ft_memcmp.c ./sources/ft_strnstr.c \
		./sources/ft_atoi.c ./sources/ft_atof.c \
		./sources/ft_calloc.c ./sources/ft_strdup.c \
		./sources/ft_substr.c ./sources/ft_strjoin.c \
		./sources/ft_strtrim.c ./sources/ft_split.c \
		./sources/ft_itoa.c ./sources/ft_strmapi.c \
		./sources/ft_striteri.c ./sources/ft_putchar_fd.c \
		./sources/ft_putstr_fd.c ./sources/ft_putendl_fd.c \
		./sources/ft_putnbr_fd.c ./sources/ft_lstnew.c \
		./sources/ft_lstadd_front.c ./sources/ft_lstsize.c \
		./sources/ft_lstlast.c ./sources/ft_lstadd_back.c \
		./sources/ft_lstdelone.c ./sources/ft_lstclear.c \
		./sources/ft_lstiter.c ./sources/ft_lstmap.c 

NAME		= libft.a
OBJS		= $(SRCS:.c=.o)
CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I . -lm
LIBC		= ar -rcs
LIB_PRINTF	= ./sources/ft_printf/libftprintf.a 
PATH_PRINTF	= ./sources/ft_printf

# Colors and Prints #
GREEN	=	\e[32m
YELLOW	=	\e[33m
RED		=	\e[31m
BLUE	=	\e[34m
RESET	=	\e[0m
_SUCCESS	=	✅ $(GREEN)Successfully compiled$(RESET)
_INFO		=	ℹ️  $(YELLOW)Info$(RESET)

.c.o:
		@make -s -C $(PATH_PRINTF)
		@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

$(NAME):	$(OBJS)
	@printf "ft_printf $(_SUCCESS).\n"
	@printf "libft $(_SUCCESS).\n"
	@$(LIBC) $(NAME) $(OBJS) $(LIB_PRINTF)

all: $(NAME)
	
clean: 
	@make clean -s -C $(PATH_PRINTF)
	@printf "$(BLUE)cleaning ft_printf 🧹 ...$(RESET)\n"
	@$(RM) $(OBJS)
	@printf "$(BLUE)cleaning libft 🧹 ...$(RESET)\n"


fclean:	clean
	@make fclean -s -C $(PATH_PRINTF)
	@$(RM) $(NAME)
	@printf "\n$(RED)Removing binary ./libft.a 🚮.$(RESET)\n\n"

re: fclean all

.PHONY:	all clean fclean re

