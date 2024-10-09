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
						ft_split.c\
						ft_strchr.c\
						ft_strdup.c\
						ft_strjoin.c\
						ft_strlcat.c\
						ft_strlcpy.c\
						ft_strlen.c\
						ft_strncmp.c\
						ft_strrchr.c\
						ft_strtrim.c\
						ft_substr.c\
						ft_tolower.c\
						ft_toupper.c\


Compiler		=	gcc
Cflags			=	-Wall -Werror -Wextra

OUTN			= $(Library).a

Ofiles			= $(Files:%.c=%.o)

NAME			= $(OUTN)

$(NAME):
		$(Compiler) $(Cflags) -c $(Files) -I ./
		ar -rc $(OUTN) $(Ofiles)

all:	$(NAME)

clean:    
		rm -rf $(Ofiles)

fclean:	clean
		rm -rf $(NAME)

re:			fclean all

test:	$(NAME)
		gcc main.c libft.a

.PHONY:		all, clean, fclean, re, test