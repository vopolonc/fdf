#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/25 12:08:36 by vopolonc          #+#    #+#              #
#    Updated: 2019/03/19 15:58:28 by vopolonc         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fdf
CC = gcc -Wall -Wextra -Werror 
SRC = keys.c get_map.c init_map.c main.c
OBJ := $(SRC:%.c=%.o)
HEAD = fdf.h
LIB = -C libft

all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	@make $(LIB)
	$(CC) -I $(HEAD) -L libft/ -lft -L/usr/local/lib -lmlx -framework OpenGL -framework AppKit $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)
	@make clean $(LIB)

fclean: clean
	rm -f $(NAME)
	@make fclean $(LIB)

re: fclean all
