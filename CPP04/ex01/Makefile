# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 21:50:34 by afalconi          #+#    #+#              #
#    Updated: 2024/02/16 06:54:40 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	a.out
SRCS	=	main.cpp  Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS	= $(SRCS:.cpp=.o)
CC		= c++
FLAGS	= -std=c++98 -arch x86_64 -Wall -Werror -Wextra -Wno-shadow -Wshadow
RM		= rm -rf

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

