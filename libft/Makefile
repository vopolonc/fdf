#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 13:54:42 by vopolonc          #+#    #+#              #
#    Updated: 2019/03/20 14:19:06 by vopolonc         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
fS = -Wall -Werror -Wextra 
SRCS = ft_free_2d_v2.c ft_sign.c ft_swap.c ft_free_2d_int.c ft_free_2d.c get_next_char.c ft_pow.c ft_itoa_base.c ft_fchrr.c ft_fchr.c ft_int_len.c ft_get_numb_len.c ft_skip.c ft_atoi.c ft_memalloc.c ft_putstr.c ft_strmapi.c ft_bzero.c \
ft_memccpy.c ft_putstr_fd.c ft_strncat.c ft_memchr.c \
ft_strcat.c ft_strncmp.c ft_isalnum.c ft_memcmp.c ft_strchr.c ft_strncpy.c \
ft_isalpha.c ft_memcpy.c ft_strclr.c ft_isascii.c ft_memdel.c \
ft_strcmp.c ft_strnequ.c ft_isdigit.c ft_memmove.c ft_strcpy.c ft_strnew.c \
ft_isprint.c ft_memset.c ft_strdel.c ft_strnstr.c \
ft_strdup.c ft_strrchr.c ft_itoa.c ft_strequ.c \
ft_strsplit.c ft_lstadd.c ft_putchar.c ft_striter.c ft_strstr.c ft_lstdel.c \
ft_putchar_fd.c ft_striteri.c ft_strsub.c ft_lstdelone.c ft_putendl.c \
ft_strjoin.c ft_strtrim.c ft_lstiter.c ft_putendl_fd.c ft_strlcat.c \
ft_tolower.c ft_lstmap.c ft_putnbr.c ft_strlen.c ft_toupper.c ft_lstnew.c \
ft_putnbr_fd.c ft_strmap.c ft_is_minus.c get_next_line.c
OBJ := $(SRCS:%.c=%.o)
HEAD = includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): $(SRCS)
	gcc $(fS) -I $(HEAD) -c $(SRCS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
