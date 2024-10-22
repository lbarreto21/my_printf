CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

SRCS = ft_putchar.c  \
ft_putnbr_base.c	\
ft_putnbr.c  \
ft_putstr.c  \
ft_printf.c  \
ft_putpointer.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean: 
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:
	rm -f $(OBJS) $(BONUS_OBJS) $(NAME)

re: fclean $(NAME)

