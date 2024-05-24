CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES =ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlen.c\
		ft_strlcat.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strlcpy.c\
		ft_strtrim.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c

BFILES =ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstmap.c

OFILES = $(CFILES:.c=.o)
BOFILES = $(BFILES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME) : $(OFILES)
	ar -rcs $(NAME) $(OFILES)

bonus: $(BOFILES)
	ar -rcs $(NAME) $(BOFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OFILES) $(BOFILES)

fclean:clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus