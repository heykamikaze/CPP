# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbenjami <nbenjami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 20:38:40 by nbenjami          #+#    #+#              #
#    Updated: 2022/09/19 20:39:35 by nbenjami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PINK = \033[38;2;200;150;200m
PURPLE = \033[38;2;200;200;250m


NAME		= Zombie

SRC			= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

GCC			= c++ -std=c++98
FLAGS		= -Wall -Werror -Wextra
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp Makefile
	$(GCC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(GCC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(PINK)♥ ♥ ♥$(PURPLE) А МЫ ПЕРЕСОБЕРЁМ $(PINK)♥ ♥ ♥ \033[0m"
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re