# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 18:28:41 by hbutt             #+#    #+#              #
#    Updated: 2024/04/28 18:34:35 by hbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

AR = @ar -rsc

SRC =  ft_printf.c
		
SRCB = 

SRCSALL = ${SRC} ${SRCB}

OBJ = $(SRC:.c=.o)

OBJB = ${SRCB:.c=.o}

OBJSALL = ${SRCSALL:.c=.o} 

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	
$(OBJ) :
	$(CC) $(CFLAGS) -c $(@:.o=.c) 

clean : 
	rm -f $(OBJSALL)

fclean : clean;
	rm -f $(NAME)

bonus : $(NAME) $(OBJB)
	@ar rc $(NAME) $(OBJB)

re : fclean all

.PHONY: all clean fclean bonus re