# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 17:22:33 by afalconi          #+#    #+#              #
#    Updated: 2023/12/20 16:57:44 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES =	main.cpp \
			PhoneBook.cpp \
			Contact.cpp

OBJ = $(CFILES:.cpp=.o)

CC = @ g++
FLAGS = -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf

NAME = phonebook

name : $(NAME)

all : $(NAME) $(NAMEB)

$(NAME) : $(OBJ)
	 $(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	@ $(RM) $(OBJ)

fclean : clean
	@ $(RM) $(NAME)

re : fclean all
