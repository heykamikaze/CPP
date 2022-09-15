# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbenjami <nbenjami@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 22:12:19 by nbenjami          #+#    #+#              #
#    Updated: 2022/09/16 01:53:58 by nbenjami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


PINK = \033[38;2;200;150;200m
PURPLE = \033[38;2;200;200;250m


NAME		= megaphone

SRC			= megaphone.cpp

CC 			= c++ -std=c++98
FLAGS 		= -Wall -Werror -Wextra
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(PINK)♥ ♥ ♥ $(PURPLE)as working for the lord, not for human masters $(PINK)♥ ♥ ♥ \033[0m"
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re