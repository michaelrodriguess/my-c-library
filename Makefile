SRCS	= ./tester/main.c \
		  ./sources/ft_isalpha.c \
		  ./sources/ft_isdigit.c \
		  ./sources/ft_isalnum.c \
		  ./sources/ft_isascii.c \
		  ./sources/ft_isprint.c \
		  ./sources/ft_strlen.c \
		  ./sources/ft_memset.c \
		  ./sources/ft_bzero.c \
		  ./sources/ft_memcpy.c \
		  ./sources/ft_memmove.c \
		  ./sources/ft_strlcpy.c \
		  ./sources/ft_strlcat.c \
		  ./sources/ft_toupper.c \
		  ./sources/ft_tolower.c \
		  ./sources/ft_strchr.c \
		  ./sources/ft_strrchr.c \
		  ./sources/ft_strncmp.c \
		  ./sources/ft_memchr.c \
		  ./sources/ft_memcmp.c \
		  ./sources/ft_strnstr.c \
		  ./sources/ft_atoi.c \
		  ./sources/ft_calloc.c \
		  ./sources/ft_strdup.c \
		  ./sources/ft_substr.c \
		  ./sources/ft_strjoin.c \
		  ./sources/ft_strtrim.c \
		  ./sources/ft_split.c \
		  ./sources/ft_itoa.c \
		  ./sources/ft_strmapi.c \
		  ./sources/ft_striteri.c \
		  ./sources/ft_putchar_fd.c \
		  ./sources/ft_putstr_fd.c \
		  ./sources/ft_putendl_fd.c \
		  ./sources/ft_putnbr_fd.c \
		  ./sources/ft_lstnew_bonus.c \
		  ./sources/ft_lstadd_front_bonus.c \
		  ./sources/ft_lstsize_bonus.c \
		  ./sources/ft_lstlast_bonus.c \
		  ./sources/ft_lstadd_back_bonus.c \
		  ./sources/ft_lstdelone_bonus.c \
		  ./sources/ft_lstclear_bonus.c \
		  ./sources/ft_lstiter_bonus.c \
		  ./sources/ft_lstmap_bonus.c \
			
OBJS	= $(SRCS:.c=.o)
CC		= @cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
NAME	= main
RMCOLOR	= \033[0m
YELLOW	= \033[0;33m
RED		= \033[0;31m


$(NAME):	$(OBJS)
		@echo "$(RED)compiling ...$(RMCOLOR)"
		$(CC) $(SRCS) -o $(NAME)
		@echo "$(YELLOW)SUCCESS😎$(RMCOLOR)"

all:	$(NAME)


clean:
		@$(RM) $(OBJS)

fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

