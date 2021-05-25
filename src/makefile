NAME	= push_swap.a
SRCS	= ft_action0.c \
			ft_action1.c \
			ft_action2.c \
			ft_ASC.c \
			ft_DEC.c \
			ft_isduplicate.c \
			ft_push_swap.c \
			ft_px.c \
			ft_rr.c \
			ft_rrr.c \
			ft_rrx.c \
			ft_rx.c \
			ft_ss.c \
			ft_strisdigit.c \
			ft_sx.c \
			ft_test_rr.c \
			ft_test_rrr.c \
			ft_istolong.c \
			ft_minimax.c \
			algo100.c \
			algo500.c \
			algo_util.c \
			algocustom.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f
LIBFT	= cd ../libft/ && make

$(NAME):	libft ${OBJS}
			ar -rcs ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

clean:
			${RM} ${OBJS}
			${LIBFT} clean

fclean:		clean
			${RM} $(NAME)
			${LIBFT} fclean

re:			fclean all

libft:
			${LIBFT} bonus
			cp ../libft/libft.a $(NAME)

.PHONY:		$(NAME) all clean fclean re libft
