# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/29 15:32:04 by wmai              #+#    #+#              #
#    Updated: 2015/05/29 15:57:24 by wmai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libmlx.a
SOURCE =	mlx_shaders.c \
			mlx_new_window.m \
			mlx_init_loop.m \
			mlx_new_image.m \
			mlx_xpm.c \
			mlx_int_str_to_wordtab.c

CC = gcc
CFLAGS = -O2
OBJ1 = $(SOURCE:.c=.o)
OBJ = $(OBJ1:.m=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m archive...\033[55G\c"
	@export result=`ar rcs $@ $(OBJ) 2>&1` ; \
	if [ "$$result" = "" ] ; then \
		echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
	else \
		echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
		echo "\n$$result" ; \
		exit 1 ; \
	fi
	@ranlib $(NAME)

%.o : %.c mlx.h
		@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m object file...\033[55G\c"
		@export result=`$(CC) $(CFLAGS) -c $< -o $@ 2>&1` ; \
		if [ "$$result" = "" ] ; then \
			echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
		else \
			echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
			echo "\n$$result" ; \
			exit 1 ; \
		fi

%.o : %.m mlx.h
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

re : fclean all

.PHONY: all, clean, fclean, re


