# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 19:12:57 by afalconi          #+#    #+#              #
#    Updated: 2023/12/21 20:16:24 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES =	HumanA.cpp	\
			HumanB.cpp	\
			main.cpp	\
			Weapon.cpp	\


OBJ = $(CFILES:.cpp=.o)

CC = @ g++
FLAGS = -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf

NAME = zombieHorde

name : $(NAME)

all : $(NAME) $(NAMEB)

$(NAME) : $(OBJ)
	 $(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	@ $(RM) $(OBJ)

fclean : clean
	@ $(RM) $(NAME)

re : fclean all
