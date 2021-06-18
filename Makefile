# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/29 01:43:28 by tdina             #+#    #+#              #
#    Updated: 2021/04/29 01:43:28 by tdina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_memmove.c ft_strlcpy.c ft_bzero.c ft_memset.c ft_strlen.c ft_calloc.c ft_putchar_fd.c ft_strmapi.c ft_isalnum.c ft_putendl_fd.c ft_strncmp.c ft_isalpha.c ft_putnbr_fd.c ft_strnstr.c  ft_isascii.c ft_putstr_fd.c ft_strrchr.c  ft_isdigit.c ft_split.c ft_strtrim.c  ft_isprint.c ft_memccpy.c ft_strchr.c ft_substr.c  ft_itoa.c ft_memchr.c ft_strdup.c ft_tolower.c ft_memcmp.c ft_strjoin.c ft_toupper.c ft_memcpy.c ft_strlcat.c
SRCS_BONUS = ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c	ft_lstdelone.c	ft_lstiter.c	ft_lstlast.c	ft_lstmap.c	ft_lstnew.c	ft_lstsize.c

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}
NAME = libft.a
CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS} libft.h
			ar rcs ${NAME} $?
.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus:
			@make OBJS="${OBJS_BONUS}" all

${NAME_BONUS}:	${OBJS_BONUS} libft.h
			ar rcs ${NAME_BONUS} $?	

clean:
			${RM} ${OBJS}
			${RM} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
