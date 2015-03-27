##
## Makefile for makefile in /home/amstut_a/rendu/Piscine-C-lib/my
## 
## Made by amstut_a
## Login   <amstut_a@epitech.net>
## 
## Started on  Mon Oct 21 09:27:19 2013 amstut_a
## Last update Fri Mar 27 12:48:04 2015 arthur
##

CC	= gcc

RM	= rm -f

NAME	= eval_expr

SRCS	= main.c\
	  eval_expr.c\
	  do_op.c \
	  lib.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean :	
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
