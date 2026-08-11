# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eganas <eganas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 15:55:45 by eganas            #+#    #+#              #
#    Updated: 2026/08/11 21:09:14 by eganas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -g
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = scalar
REMOVE = rm -rf
DIR_SRC = src/
INC = -I includes

SRC1 = main.cpp ScalarConverter.cpp

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