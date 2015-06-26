# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/03 19:40:35 by wmai              #+#    #+#              #
#    Updated: 2015/06/24 16:25:00 by wmai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC_PATH = ./src/
SRC_NAME =  main.c \
			fdf_get_key.c \
			fdf_get_expose.c \
			fdf_parser.c \
			fdf_init_env.c \
			fdf_init_map.c \
			fdf_init_vector.c \
			fdf_putline.c \
			fdf_switch_points.c \
			fdf_putpixel.c \
			fdf_color.c \
			fdf_fill_img.c \
			fdf_draw.c

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

LPATH = libft/
LFLAG = -L $(LPATH) -lft

LGNLPATH = gnl/
LGNLFLAG = -L $(LGNLPATH) -lgnl

LMLXPATH = minilibx_macos/
LMLXFLAG = -L $(LMLXPATH) -lmlx -framework OpenGL -framework AppKit

CC = gcc
CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LPATH)
	@make -C $(LGNLPATH)
	@make -C $(LMLXPATH)
	@echo "\033[35;1m• \033[0mCreating \033[35m$(NAME)\033[0m ...\033[55G\c"
	@export result=`$(CC) -o $(NAME) $(OBJ) $(LFLAG) $(LGNLFLAG) $(LMLXFLAG)` ; \
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
	@make clean -C $(LPATH)
	@make clean -C $(LGNLPATH)
	@make clean -C $(LMLXPATH)
	@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m object files ...\033[55G\c"
	@rm -rf $(OBJ)
	@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	@make fclean -C $(LPATH)
	@make fclean -C $(LGNLPATH)
	@make clean -C $(LMLXPATH)
	@echo "\033[35;1m• \033[0mRemoving \033[35m$(NAME)\033[0m ...\033[55G\c"
	@rm -f $(NAME)
	@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

re: fclean all

norme:
	norminette $(SRC)

.PHONY: all, clean, fclean, re
