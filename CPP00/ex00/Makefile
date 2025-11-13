# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eganas <eganas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 15:55:45 by eganas            #+#    #+#              #
#    Updated: 2025/11/13 16:55:22 by eganas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -g
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
REMOVE = rm -rf

SRC1 = main.cpp

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