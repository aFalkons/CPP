# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 21:50:34 by afalconi          #+#    #+#              #
#    Updated: 2024/03/15 17:21:16 by afalconi         ###   ########.fr        #
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
FLAGS	= -std=c++98 -arch x86_64 -Wall -Werror -Wextra -Wno-shadow -Wshadow
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

