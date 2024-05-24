# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 18:28:41 by hbutt             #+#    #+#              #
#    Updated: 2024/05/24 17:30:45 by hbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC =  ft_printf.c ft_format.c utils.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
$(OBJ) :
	$(CC) $(CFLAGS) -c $(@:.o=.c) 

clean : 
	rm -f $(OBJ)

fclean : clean;
	rm -f $(NAME)


re : fclean all

.PHONY: all clean fclean re