NAME = ft_display_file
SOURCE = ft_display_file.c
OBJECT = ${SOURCE:.c=.o}
GCC = gcc -Wall -Werror -Wextra
RM = rm -f

all:		${NAME}

${NAME}:	${SOURCE}
			${GCC} -c ${SOURCE}
			${GCC} -o ${NAME} ${OBJECT}

clean:
			${RM} ${OBJECT}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
