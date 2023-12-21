# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 17:43:42 by afalconi          #+#    #+#              #
#    Updated: 2023/12/21 17:49:14 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES =	main.cpp		\
			Zombie.cpp		\
			zombieHorde.cpp	\


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
