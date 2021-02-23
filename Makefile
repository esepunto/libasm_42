NAME	=	libasm.a

NASM	=	nasm -f macho64 # Añadir flag -L

CC		=	gcc -Wall -Wextra -Werror

SRCS	=	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s 
#recorrer_matriz.s
#		hello.asm
#		ft_strcpy.s \

#		ft_read.s \
#		ft_strdup.s \
#		hello.s 

OBJS	=	$(SRCS:.s=.o)

CSRC	=	main.c

EXT		=	$(SRCS:.s=)

RM		=	rm -f

AR		=	ar rcs # rc ó rcs (revisar)

all: $(NAME)

%.o: %.s
			$(NASM) $<

$(NAME): $(OBJS)
			$(AR) $(NAME) $^

run: $(NAME)
			$(CC) $(CSRC) $(NAME) -o my_ass
			./my_ass

clean:
			$(RM) $(OBJS)

fclean: clean
			$(RM) $(NAME)
			$(RM) my_ass

re: fclean all

vobj:
	cat $(OBJS)

vname:
	cat $(NAME)

vsr:
	cat $(SRCS)

launch:
		$(NAME)
		gcc $(FLAGS) main.c $(name) -o exe

