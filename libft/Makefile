# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 13:38:27 by tcosta-d          #+#    #+#              #
#    Updated: 2023/05/02 17:14:40 by tcosta-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c \
      ft_isprint.c ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_itoa.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \

OBJS = ${SRC:.c=.o}

INCLUDE = -I .

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

tclean: clean
		${RM} teste

re: fclean all

teste:
		${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean re