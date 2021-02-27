NAME	=	libasm.a

NASM	=	nasm -f macho64

CC		=	gcc -Wall -Wextra -Werror

SRCS	=	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s

OBJS	=	$(SRCS:.s=.o)

RM		=	rm -f

AR		=	ar rcs # rcs: replace, create, sort

all: $(NAME)
			$(CC) main.c -L./ -lasm -o my_ass

%.o: %.s
			$(NASM) $?

$(NAME): $(OBJS)
			$(AR) $(NAME) $^

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

