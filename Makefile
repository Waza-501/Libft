# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.42.fr>                +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/11 20:08:26 by ohearn        #+#    #+#                  #
#    Updated: 2022/07/26 19:46:57 by owen          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

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

BONUS_SRCS	=	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c\
				

NAME	=	libft.a
CC		=	@gcc
CFLAGS	=	-Wall -Werror -Wextra -c
AR		=	@ar rcs
OBJS	=	$(SRCS:%.c=%.o)
BONUS	=	$(BONUS_SRCS:%.c=%.o)

all:		$(NAME)
			$(info Finished compiling mandatory functions!)

$(NAME):	$(OBJS)
				$(AR) $(NAME) $(OBJS)
$(OBJS):	$(SRCS)
				$(CC) $(CFLAGS) $(SRCS)

bonus:		$(OBJS) $(BONUS)
				$(AR) $(NAME) $(BONUS)
			$(info Finished compiling mandatory and bonus funtions!)

clean:
			@rm -rf $(OBJS)
			@rm -rf $(BONUS)
			$(info Done!)

fclean:		clean
			@rm -rf $(NAME)

re:	fclean all

.PHONY:		all, clean, fclean, re,
