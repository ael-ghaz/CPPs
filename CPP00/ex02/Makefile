# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eganas <eganas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 15:55:45 by eganas            #+#    #+#              #
#    Updated: 2026/04/04 20:32:41 by eganas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -g
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = account
REMOVE = rm -rf

SRC1 = tests.cpp Account.cpp

OBJ = $(SRC1:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus