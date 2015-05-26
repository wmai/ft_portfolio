# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/14 20:36:56 by wmai              #+#    #+#              #
#    Updated: 2015/04/25 15:20:50 by wmai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = liblist.a
SOURCE =	list_create_circular.c list_create_node.c list_put_circular.c \
			list_put_node.c list_first_node.c list_rotate.c list_reverse.c \
			list_pop.c list_shift.c list_copy.c list_join.c list_delete.c \
			list_insert_index.c list_insert_last.c throw_error.c

CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m archive...\033[55G\c"
		@export result=`ar rcs $@ $(OBJ) 2>&1` ; \
		if [ "$$result" = "" ] ; then \
			echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
		else \
			echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
			echo "\n$$result" ; \
			exit 1 ; \
		fi

%.o : %.c inc/liblist.h
		@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m object file...\033[55G\c"
		@export result=`$(CC) $(CFLAGS) -c $< -o $@ 2>&1` ; \
		if [ "$$result" = "" ] ; then \
			echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
		else \
			echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
			echo "\n$$result" ; \
			exit 1 ; \
		fi

clean :
		@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m object files...\033[55G\c"
		@rm -rf $(OBJ)
		@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

fclean : clean
		@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m...\033[55G\c"
		@rm -rf $(NAME)
		@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

mrproper: fclean

re : fclean all

.PHONY: all, clean, fclean, re
