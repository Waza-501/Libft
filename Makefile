Library				=	libft
Files				=	ft_bzero.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isdigit.c\
						ft_isprint.c\
						ft_strchr.c\
						ft_strlen.c\
						ft_strrchr.c\
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

.PHONY:		all, clean, fclean, re