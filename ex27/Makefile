# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umoff <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 22:03:49 by umoff             #+#    #+#              #
#    Updated: 2019/04/04 22:17:52 by umoff            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./sources/*.c

FLAGS = -Wall -Wextra -Werror

INCLUDE = ./includes

all:
		gcc $(SRC) -o $(NAME) $(FLAGS) -I$(INCLUDE)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
