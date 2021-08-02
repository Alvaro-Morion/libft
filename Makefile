# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/31 12:05:34 by amorion-          #+#    #+#              #
#    Updated: 2021/08/02 12:57:01 by amorion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtirm.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

.c.o:
	gcc -Wall -Werror -Wextra -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re: fclean all

.PHONY: re clean fclean all
