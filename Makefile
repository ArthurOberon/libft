NAME = libft.a

#MANDATORY PART
SRCS =	ft_atoi.c \
		ft_itoa.c \
		ft_split.c \
		ft_bzero.c \
		ft_strlen.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strmapi.c \
		ft_strnstr.c \
		ft_strjoin.c \
		ft_strncmp.c \
		ft_strtrim.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strrchr.c \
		ft_striteri.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putchar_fd.c \

#PERSONAL FUNCTION
P_SRCS = 	ft_abs.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_nbrlen.c \
			ft_putchar.c \
			ft_isspace.c \
			ft_putendl.c \
			#ft_atoi_base.c -> ERROR\
			#ft_putnbr_base.c -> ERROR\
			#ft_convert_base.c -> ERROR\
			#ft_print_address.c -> ERROR\
			#ft_putnbr_base_fd.c -> ERROR\
			#ft_print_address_fd.c -> ERROR\
			#ft_putnbr_base_to_string.c -> ERROR\

#BONUS PART
BONUS = ft_lstnew.c \
		ft_lstmap.c \
		ft_lstsize.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \

 
INC = includes

RM = rm -f

CC = gcc -Wall -Wextra -Werror -I${INC}

OBJS = ${SRCS:.c=.o}

PSRCS_OBJS = ${P_SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

all:	${NAME}

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${PSRCS_OBJS} ${BONUS_OBJS}
		ar rc ${NAME} ${OBJS} ${PSRCS_OBJS} ${BONUS_OBJS}
	
bonus: ${BONUS_OBJS} ${OBJS}
	ar rc ${NAME} ${OBJS} ${BONUS_OBJS}

clean:	
	${RM} ${OBJS} ${PSRCS_OBJS} ${BONUS_OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all


.PHONY:	all clean fclean re
