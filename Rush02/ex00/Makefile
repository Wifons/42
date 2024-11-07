CC = gcc
SRCS_DIR = srcs/
INCLUDES = includes/
CFLAGS =  -Wall -Wextra -Werror -I${INCLUDES}
SRCS = \
		${SRCS_DIR}utils.c\
		${SRCS_DIR}main.c
NAME = rush-02

all : $(NAME)

$(NAME) :
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

fclean :
	rm -f ${NAME}
