# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 15:45:04 by uschmidt          #+#    #+#              #
#    Updated: 2025/07/05 10:36:19 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fragtrap

SRC_FOLDER	= ./
OBJ_FOLDER	= build/

CFILES		:=
vpath %.cpp $(SRC_FOLDER)
CFILES += main.cpp

vpath %.cpp $(SRC_FOLDER)ClapTrap
CFILES += ClapTrap.cpp

vpath %.cpp $(SRC_FOLDER)ScavTrap
CFILES += ScavTrap.cpp

vpath %.cpp $(SRC_FOLDER)FragTrap
CFILES += FragTrap.cpp

OFILES      = $(addprefix $(OBJ_FOLDER), $(notdir $(CFILES:.cpp=.o)))

CC			= c++

CFLAGS		= -g -Wall -Wextra -Werror -std=c++98

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) -o $(SRC_FOLDER)$(NAME) $(OFILES)

$(OBJ_FOLDER)%.o: %.cpp $(DEPS)
	mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -f $(OFILES)
	find $(SRC_FOLDER) -name "*.o" -delete

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
