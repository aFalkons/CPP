# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 19:12:57 by afalconi          #+#    #+#              #
#    Updated: 2023/12/25 21:55:48 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = HumanA.cpp \
         HumanB.cpp \
         main.cpp \
         Weapon.cpp

OBJ = $(CFILES:.cpp=.o)

CC = @g++
FLAGS = -g -Wall -Wextra -Werror -std=c++98 -arch x86_64
RM = rm -rf

NAME = my_program

name: $(NAME)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

main.o: main.cpp HumanA.o HumanB.o
HumanA.o: HumanA.cpp HumanA.hpp
HumanB.o: HumanB.cpp HumanB.hpp
Weapon.o: Weapon.cpp Weapon.hpp

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
