Library				=	libft
Files				=	ft_atoi.c\
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

BFiles			=		ft_lstadd_back.c\
						ft_lstadd_front.c\
						ft_lstclear.c\
						ft_lstdelone.c\
						ft_lstiter.c\
						ft_lstlast.c\
						ft_lstmap.c\
						ft_lstnew.c\
						ft_lstsize.c\


Compiler		=	gcc
Cflags			=	-Wall -Werror -Wextra

OUTN			= $(Library).a

Ofiles			= $(Files:%.c=%.o)
BOfiles			= $(BFiles:%.c=%.o)

NAME			= $(OUTN)

%.o: %.c
			$(Compiler) $(Cflags) -c $< -o $@

$(NAME):	$(Ofiles)
			ar -rc $(OUTN) $(Ofiles)

all:	$(NAME)

clean:    
		rm -rf $(Ofiles) $(BOfiles)

fclean:	clean
		rm -rf $(NAME)

re:			fclean all

bonus:	$(Ofiles) $(BOfiles)
		ar -rc $(OUTN) $(BOfiles)

.PHONY:		all, clean, fclean, re, bonus