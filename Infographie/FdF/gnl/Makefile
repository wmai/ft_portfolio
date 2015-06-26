# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/14 20:36:56 by wmai              #+#    #+#              #
#    Updated: 2015/05/27 20:46:38 by wmai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libgnl.a
SOURCE = get_next_line.c

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

%.o : %.c inc/get_next_line.h
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