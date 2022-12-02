# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 11:57:35 by amakhrou          #+#    #+#              #
#    Updated: 2022/11/18 12:54:18 by amakhrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_putnbr.c ft_putnbr_u.c ft_putstr.c ft_printf.c ft_hexa.c ft_point.c
		
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
			ar -rc $(NAME) $(OBJS)
clean :
			rm -rf $(OBJS)
fclean :	clean
			rm -f $(NAME)				
re :	fclean all