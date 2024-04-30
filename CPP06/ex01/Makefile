# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 21:50:34 by afalconi          #+#    #+#              #
#    Updated: 2024/04/30 17:32:29 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	a.out
SRCS	= main.cpp
GETSET	=	"char ConvChar ScalarConverter" \
			"int ConvInt ScalarConverter" \
			"float ConvFloat ScalarConverter" \
			"double ConvDouble ScalarConverter"


OBJS	= $(SRCS:.cpp=.o)
CC		= c++
FLAGS	= -std=c++98   -Wall -Werror -Wextra -Wno-shadow -Wshadow
RM		= rm -rf

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

getset:
	@for var in $(GETSET); do \
		./generate_getset.sh $$var; \
	done

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

