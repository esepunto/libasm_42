NAME	=	libasm.a

CC			=	nasm

SRC	=	ft_strlen.asm \
		ft_strcpy.asm \
		ft_strcmp.asm \
		ft_write.asm \
		ft_read.asm \
		ft_strdup.asm

OBJ	=	$(SRC:.c=.o)

RM		=	rm -f

all: $(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) s(OBJ)

clean:
			rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)

re: fclean all
