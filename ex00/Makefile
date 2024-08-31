# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/30 10:18:27 by nazouz            #+#    #+#              #
#    Updated: 2024/08/30 10:18:49 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			convert

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			ScalarConverter.hpp

SRCS			=			main.cpp ScalarConverter.cpp

OBJS			=			$(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CPP) -c $(CPPFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all