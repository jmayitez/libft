# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/10 22:38:22 by jasomayi          #+#    #+#              #
#    Updated: 2019/06/20 17:42:33 by jasomayi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = /bin/rm -f

SRC =   ft_atoi.c \
                ft_bzero.c \
                ft_isalpha.c \
                ft_isalnum.c \
                ft_isascii.c \
                ft_isdigit.c \
                ft_isprint.c \
                ft_islower.c \
                ft_isupper.c \
                ft_itoa.c \
                ft_memccpy.c \
                ft_memalloc.c \
                ft_memdel.c \
                ft_memcmp.c \
                ft_memchr.c \
                ft_putchar.c \
                ft_memcpy.c \
                ft_memset.c \
                ft_memmove.c \
                ft_putchar_fd.c \
                ft_putendl.c \
                ft_putendl_fd.c \
                ft_putstr.c \
                ft_putstr_fd.c \
                ft_putnbr.c \
                ft_strcat.c \
                ft_putnbr_fd.c \
                ft_strchr.c \
                ft_strclr.c \
                ft_strcmp.c \
                ft_strdel.c \
                ft_strcpy.c \
                ft_striter.c \
                ft_strdup.c \
                ft_strequ.c \
                ft_striteri.c \
                ft_strlen.c \
                ft_strjoin.c \
                ft_strlcat.c \
                ft_strncmp.c \
                ft_strmapi.c \
                ft_strmap.c \
                ft_strnequ.c \
                ft_strncat.c \
                ft_strncpy.c \
                ft_strnew.c \
                ft_strrchr.c \
                ft_strnstr.c \
                ft_strsub.c \
                ft_strstr.c \
                ft_strsplit.c \
                ft_strtrim.c \
                ft_tolower.c \
                ft_toupper.c \
                ft_lstdel.c \
                ft_lstadd.c \
                ft_lstdelone.c \
                ft_lstiter.c \
                ft_lstmap.c \
                ft_lstnew.c \
				ft_numb_of_words.c \
				ft_split_whitespaces.c \
				ft_print_words_tables.c \
				ft_is_space.c \
				ft_strleni.c \
				ft_strline.c \
				ft_strrev.c \
				ft_strjoin_free.c \
				ft_strchri.c \
				ft_countword.c \
				get_next_line.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
			@$(CC) $(FCLAGS) -c $(SRC)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)

clean:
		@$(RM) $(OBJ)

fclean: clean 
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
