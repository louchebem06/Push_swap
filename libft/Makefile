# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 16:37:11 by bledda            #+#    #+#              #
#    Updated: 2021/03/27 17:00:00 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_atoi.c \
		ft_strlen.c \
		ft_isdigit.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_split.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_substr.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_isset_tab.c \
		ft_isset.c \
		ft_iswhitespace.c
OBJS	= ${SRCS:.c=.o}
HEADER  = libft.h

SRCSBONUS	= ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
OBJSBONUS	= ${SRCSBONUS:.c=.o}

CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

$(NAME):	${OBJS}
			ar -rcs ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:	${OBJS} ${OBJSBONUS}
			ar -rcs ${NAME} $^

.PHONY: $(NAME) all bonus clean fclean re