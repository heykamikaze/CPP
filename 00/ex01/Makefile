# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbenjami <nbenjami@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 22:12:19 by nbenjami          #+#    #+#              #
#    Updated: 2022/09/16 02:05:17 by nbenjami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


PINK = \033[38;2;200;150;200m
PURPLE = \033[38;2;200;200;250m


NAME		= phonebook

SRC			= main.cpp Contact.cpp PhoneBook.cpp
HEADER		= Contact.hpp PhoneBook.hpp

CC 			= c++ -std=c++98
FLAGS 		= -Wall -Werror -Wextra
OBJ 		= $(SRC:.cpp=.o)
RM 			= rm -f

all: $(NAME)

%.o : %.cpp $(HEADER) Makefile
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