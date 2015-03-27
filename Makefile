##
## Makefile for makefile in /home/amstut_a/rendu/Piscine-C-lib/my
## 
## Made by amstut_a
## Login   <amstut_a@epitech.net>
## 
## Started on  Mon Oct 21 09:27:19 2013 amstut_a
## Last update Wed Oct 23 21:59:00 2013 amstut_a
##

CC	= cc

RM	= rm -f

NAME	= eval_expr

SRCS	= main.c\
	  eval_expr.c\
	  do_op.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) -L ../Piscine-C-lib -lmy

clean :	
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
