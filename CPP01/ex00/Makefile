# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 17:43:42 by afalconi          #+#    #+#              #
#    Updated: 2023/12/20 19:51:25 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES =	main.cpp		\
			newZombie.cpp	\
			randomChump.cpp	\
			Zombie.cpp		\


OBJ = $(CFILES:.cpp=.o)

CC = @ g++
FLAGS = -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf

NAME = Zombie

name : $(NAME)

all : $(NAME) $(NAMEB)

$(NAME) : $(OBJ)
	 $(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	@ $(RM) $(OBJ)

fclean : clean
	@ $(RM) $(NAME)

re : fclean all
