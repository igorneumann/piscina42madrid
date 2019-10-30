# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/23 20:45:09 by ineumann          #+#    #+#              #
#    Updated: 2019/09/25 20:28:50 by ineumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ

FUNCTS = main ft_putstr ft_strcpy ft_strlen ft_strcmp ft_strstr ft_swap functions #Añadir aquí las funciones a compilar
FLAGS = -Wall -Wextra -Werror
OPTIONS = -I includes

FILES = $(wildcard *.c)
OBJECTS = $(patsubst %, %.o, $(FUNCTS))
DICTS = $(wildcard *.dict)

.PHONY: all $(NAME) clean fclean

all: $(NAME)

$(NAME):
	gcc $(OPTIONS) $(FLAGS) $(FILES) $(DICTS) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
