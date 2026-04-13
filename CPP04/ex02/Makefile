# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eganas <eganas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 15:55:45 by eganas            #+#    #+#              #
#    Updated: 2026/04/13 21:07:57 by eganas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -g
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = animal
REMOVE = rm -rf
DIR_SRC = src/
INC = -I includes

SRC1 = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

SRC = $(addprefix $(DIR_SRC), $(SRC1))
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(DIR_SRC)%.o : $(DIR_SRC)%.cpp
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INC) -o $@

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus