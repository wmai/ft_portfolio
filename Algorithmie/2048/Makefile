# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 20:06:55 by wmai              #+#    #+#              #
#    Updated: 2015/03/08 01:54:11 by wmai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = game_2048


SRC_PATH = ./src/
SRC_NAME =	main.c \
			fusion.c \
			get_and_check_const.c \
			grid.c \
			handle_action.c \
			handle_move.c \
			put_new_value.c \
			random_generator.c \
			slide_up.c \
			slide_down.c \
			slide_right.c \
			slide_left.c \
			color.c \
			game_over.c
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

CC = gcc
CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m...\033[55G\c"
	@export result=`$(CC) -o $(NAME) $(OBJ) -lcurses` ; \
	if [ "$$result" = "" ] ; then \
		echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
	else \
		echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
		echo "\n$$result" ; \
		exit 1 ; \
	fi

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m object file...\033[55G\c"
	@export result=`$(CC) $(CFLAG) $(INC) -o $@ -c $<` ; \
	if [ "$$result" = "" ] ; then \
		echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
	else \
		echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
		echo "\n$$result" ; \
		exit 1 ; \
	fi

clean:
	@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m object files...\033[55G\c"
	@rm -rf $(OBJ)
	@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m...\033[55G\c"
	@rm -rf $(NAME)
	@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

re: fclean all

norme:
	norminette $(SRC)

.PHONY: all, clean, fclean, re