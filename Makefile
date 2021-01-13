NAME	=	libasm.a

CC			=	nasm

SRC	=	hello.asm
#		ft_strlen.asm \
#		ft_strcpy.asm \
#		ft_strcmp.asm \
#		ft_write.asm \
#		ft_read.asm \
#		ft_strdup.asm

OBJ	=	$(SRC:.c=.o)

RM		=	rm -f

all: $(NAME)

$(NAME):	$(OBJ)
			nasm -fmacho64 $(SRC)
			ld $(OBJ) -o -macosx_version_min 18.6.0 -lSystem

#ar rcs $(NAME) s(OBJ)

clean:
			rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)

re: fclean all
