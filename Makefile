NAME	=	libasm.a

NASM	=	nasm -f macho64 # Añadir flag -L

CC		=	gcc -Wall -Wextra -Werror

SRCS	=	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s 
#			ft_strdup

SRCC	=	test_strlen.c \
			test_strcpy.c \
			test_strcmp.c \
			test_write.c \
			test_read.c \
			test_strdup.c

OBJS	=	$(SRCS:.s=.o)

OBJC	=	$(SRCC:.c=.o)

RM		=	rm -f

AR		=	ar rcs # rc ó rcs (revisar)

all: $(NAME)

%.o: %.s
			$(NASM) $<

$(NAME): $(OBJS) $(OBJC)
		@	$(AR) $(NAME) $^

run: $(NAME)
		@	$(CC) main.c $(NAME) -o my_ass
		@	./my_ass

clean:
			$(RM) $(OBJS) $(OBJC)

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

