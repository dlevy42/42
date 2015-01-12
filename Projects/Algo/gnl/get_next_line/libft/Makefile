# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlevy <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/28 13:51:11 by dlevy             #+#    #+#              #
#    Updated: 2015/01/08 16:05:10 by dlevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libft.a
CFLAGS	=	-Wall -Wextra -Werror
SRC_O	=	ft_strcat.o				\
			ft_strdup.o				\
			ft_strjoin.o			\
			ft_strlen.o				\
			ft_strnew.o				\
			ft_strsub.o				

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
