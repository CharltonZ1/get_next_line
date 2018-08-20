TAG = gcc
NAME =	libft.a
FLAG = -Wall -Werror -Wextra
SRC =		ft_atoi.c\
			ft_memccpy.c\
			ft_putchar.c\
			ft_strncmp.c\
			ft_bzero.c\
			ft_memchr.c\
			ft_putstr.c\
			ft_strrchr.c\
			ft_isalnum.c\
			ft_memcmp.c\
			ft_strchr.c\
			ft_strstr.c\
			ft_isalpha.c\
			ft_memcpy.c\
			ft_strcmp.c\
			ft_tolower.c\
			ft_isascii.c\
			ft_memmove.c\
			ft_strcpy.c\
			ft_toupper.c\
			ft_isdigit.c\
			ft_memset.c\
			ft_strlen.c\
			ft_strnstr.c\
			ft_strcat.c\
			ft_strncat.c\
			ft_isprint.c\
			ft_strlcat.c\
			ft_strdup.c\
			ft_strncpy.c\
			ft_strnew.c\
			ft_memalloc.c\
			ft_memdel.c\
			ft_strnew.c\
			ft_strdel.c\
			ft_strclr.c\
			ft_strequ.c\
			ft_strnequ.c\
			ft_strsub.c\
			ft_strjoin.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strtrim.c\
			ft_strsplit.c\
			ft_itoa.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putendl.c\
			ft_putnbr.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_count_white.c\
			ft_isspace.c\
			ft_strtrim_all.c\
			ft_isupper.c\
			ft_islower.c\
			ft_strjoin_memdel.c\

all : $(NAME)

$(NAME) :
		$(TAG) $(FLAG) -c $(SRC)
		ar rc $(NAME) *.o
		ranlib $(NAME)
clean:
		rm -f *.o

fclean: clean
		rm -f libft.a

re:		fclean all
