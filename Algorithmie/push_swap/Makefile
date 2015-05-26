# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/03 19:40:35 by wmai              #+#    #+#              #
#    Updated: 2015/05/25 13:11:16 by wmai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_PATH = ./src/
SRC_NAME =  main.c \
			push.c \
			swap.c \
			rotate.c \
			select_algo.c \
			push_swap_small.c \
			push_swap_medium.c \
			push_swap_large.c \
			split.c \
			bubble_sort.c \
			bubble_sorted.c \
			bubble_sort_swap.c \
			bubble_sort_rotate.c \
			push_all_a.c \
			push_all_b.c \
			rotate_until_index_a.c \
			rotate_until_index_b.c \
			get_min.c \
			get_max.c \
			is_sorted.c \
			is_sorted_circular.c \
			is_sorted_unitary.c \
			init_piles.c \
			split_arg.c \
			checks.c \
			putop.c 
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

LPATH = libft/
LFLAG = -L $(LPATH) -lft

LLISTPATH = liblist/
LLISTFLAG = -L $(LLISTPATH) -llist

CC = gcc
CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LPATH)
	@make -C $(LLISTPATH)
	@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m ...\033[55G\c"
	@export result=`$(CC) -o $(NAME) $(OBJ) $(LFLAG) $(LLISTFLAG)` ; \
	if [ "$$result" = "" ] ; then \
		echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
	else \
		echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
		echo "\n$$result" ; \
		exit 1 ; \
	fi

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m object file $@ ...\033[55G\c"
	@export result=`$(CC) $(CFLAG) $(INC) -o $@ -c $<` ; \
	if [ "$$result" = "" ] ; then \
		echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
	else \
		echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
		echo "\n$$result" ; \
		exit 1 ; \
	fi

clean:
	@make clean -C $(LPATH)
	@make clean -C $(LLISTPATH)
	@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m object files ...\033[55G\c"
	@rm -rf $(OBJ)
	@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	@make fclean -C $(LPATH)
	@make fclean -C $(LLISTPATH)
	@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m ...\033[55G\c"
	@rm -rf $(NAME)
	@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

re: fclean all

norme:
	norminette $(SRC)

.PHONY: all, clean, fclean, re