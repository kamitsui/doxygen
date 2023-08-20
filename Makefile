# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 10:44:11 by kamitsui          #+#    #+#              #
#    Updated: 2023/08/20 11:05:39 by kamitsui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = cc
SRC = main.c \
	  add.c \
	  japanesefunction.c
SRC_DIR = src
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
vpath %.c $(SRC_DIR)
INC = -Iinclude

$(OBJ_DIR)/%.o : %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(INC) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	cc $(INC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all re fclean clean
