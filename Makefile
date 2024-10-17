SRCS	=		ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_split.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_striteri.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_tolower.c\
				ft_toupper.c\

BONUS_SRCS	=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c\
				

NAME	=	libft.a
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -c
AR		=	@ar rcs
OBJS	=	$(SRCS:%.c=%.o)
BONUS	=	$(BONUS_SRCS:%.c=%.o)

all:		$(NAME)
			$(info Finished compiling libft functions!)

$(NAME):	$(OBJS)
				$(AR) $(NAME) $(OBJS)
$(OBJS):	$(SRCS)
				$(CC) $(CFLAGS) $(SRCS)
$(BONUS):	$(BONUS_SRCS)
				$(CC) $(CFLAGS) $(BONUS_SRCS)

bonus:		$(OBJS) $(BONUS)
				$(AR) $(NAME) $(BONUS)
			$(info Finished compiling libft functions + bonus functions!)

clean:
			@rm -rf $(OBJS)
			@rm -rf $(BONUS)
			@echo ""
			@echo Removed libft object files.

fclean:		clean
			@rm -rf $(NAME)
			@echo ""
			@echo Removed all made libft functions.

re:	fclean all

.PHONY:		all, clean, fclean, re, bonus