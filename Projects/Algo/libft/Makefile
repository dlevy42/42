# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlevy <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/28 13:51:11 by dlevy             #+#    #+#              #
#    Updated: 2014/11/28 15:29:28 by dlevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libft.a
CFLAGS	=	-Wall -Wextra -Werror
SRC_O	=	ft_atoi.o				\
			ft_bzero.o				\
			ft_isalnum.o			\
			ft_isalpha.o			\
			ft_isascii.o			\
			ft_isdigit.o			\
			ft_isprint.o			\
			ft_itoa.o				\
			ft_memalloc.o			\
			ft_memccpy.o			\
			ft_memchr.o				\
			ft_memcmp.o				\
			ft_memcpy.o				\
			ft_memdel.o				\
			ft_memmove.o			\
			ft_memset.o				\
			ft_putchar.o			\
			ft_putchar_fd.o			\
			ft_putendl.o			\
			ft_putendl_fd.o			\
			ft_putnbr.o				\
			ft_putnbr_fd.o			\
			ft_putstr.o				\
			ft_putstr_fd.o			\
			ft_recursive_power.o	\
			ft_strcat.o				\
			ft_strchr.o				\
			ft_strclr.o				\
			ft_strcmp.o				\
			ft_strcpy.o				\
			ft_strdel.o				\
			ft_strdup.o				\
			ft_strequ.o				\
			ft_striter.o			\
			ft_striteri.o			\
			ft_strjoin.o			\
			ft_strlcat.o			\
			ft_strlen.o				\
			ft_strmap.o				\
			ft_strmapi.o			\
			ft_strncat.o			\
			ft_strncmp.o			\
			ft_strncpy.o			\
			ft_strnequ.o			\
			ft_strnew.o				\
			ft_strnstr.o			\
			ft_strrchr.o			\
			ft_strstr.o				\
			ft_strsub.o				\
			ft_strtrim.o			\
			ft_tolower.o			\
			ft_toupper.o			\
			ft_strsplit.o

all: $(NAME)

$(NAME): $(SRC_O)
	ar rc $(NAME) $(SRC_O)
	ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
