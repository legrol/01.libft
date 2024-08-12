SRCS = 	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c 
SRCSB =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c 
NAME = libft.a
OBJS = ${SRCS:.c=.o}
OBJSB = ${SRCSB:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f


all:	${NAME} 

${NAME} : ${OBJS} libft.h
	@echo "Compiling .."
	@ar rcs ${NAME} ${OBJS}
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

#ar rcs $@ $^

%.o: %.c libft.h
	@${CC} ${CFLAGS} -c $< -o $@
#@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}	

clean:
	@echo "Remove .o  ..."
	@${RM} ${OBJS} ${OBJSB}
	@echo "OBJS and OBJSB deleted"

fclean:	clean 
	@echo "Remove lib ..."
	@${RM} ${NAME}
	@echo "$(NAME) deleted"

re:	fclean all
#re:	fclean ${NAME}

bonus: ${OBJS} ${OBJSB}
	@ar rcs ${NAME} ${OBJS} ${OBJSB}
#ar rcs $@ $^

.PHONY : all clean fclean re bonus
