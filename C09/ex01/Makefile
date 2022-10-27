# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 12:00:27 by cping-xu          #+#    #+#              #
#    Updated: 2022/09/06 14:30:33 by cping-xu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
OBJS	= ${SRCS:.c=.o}
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_strcmp.c
INCS	= includes
LIBC	= ar rc
CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	 ${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME} : ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all
