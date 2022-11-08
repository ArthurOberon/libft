NAME = libft.a

SRCS = ft_isalpha.c ft_bzero.c ft_strlen.c Tester/test.c

INC = includes

RM = rm -f

CC = gcc -Wall -Wextra -Werror -I${INC}

OBJS = ${SRCS:.c=.o}

all:	${NAME}

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}
	
clean:	
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re