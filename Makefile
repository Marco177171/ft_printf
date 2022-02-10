# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masebast <masebast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 12:51:12 by masebast          #+#    #+#              #
#    Updated: 2022/02/10 14:22:11 by masebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = *.c

OBJS = $(SRCS:.c=.o)

HDRS = ft_printf.h

FLAGS = -Wall -Wextra -Werror

$(NAME):
		gcc -c $(FLAGS) -I $(HDRS) $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean:     clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re