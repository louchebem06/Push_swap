NAME	= push_swap

$(NAME):	
			cd src && make
			gcc -Wall -Werror -Wextra main.c src/${NAME}.a -o ${NAME}

all:		${NAME}

clean:
			cd src && make clean

fclean:		clean
			rm ${NAME}
			cd src && make fclean

re:			fclean all

.PHONY:		$(NAME) all clean fclean re
