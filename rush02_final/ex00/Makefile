# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbergs-f <sbergs-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/21 12:52:16 by sbergs-f          #+#    #+#              #
#    Updated: 2019/09/22 23:13:29 by sbergs-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

FUNCTS = rush_02 functions #Añadir aquí las funciones a compilar
FLAGS = -Wall -Wextra -Werror
OPTIONS = -I includes

FILES = $(wildcard *.c)
OBJECTS = $(patsubst %, %.o, $(FUNCTS))
DICTS = $(wildcard *.dict)

.PHONY: all $(NAME) clean fclean re

all: $(NAME)

$(NAME):
	gcc $(OPTIONS) $(FLAGS) $(FILES) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
