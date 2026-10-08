# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-ghaz <ael-ghaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 15:55:45 by eganas            #+#    #+#              #
#    Updated: 2026/10/08 14:47:57 by ael-ghaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -g
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = PmergeMe
REMOVE = rm -rf
DIR_SRC = src/
INC = -I includes

SRC1 = main.cpp PmergeMe.cpp

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