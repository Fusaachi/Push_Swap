# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 10:52:17 by pgiroux           #+#    #+#              #
#    Updated: 2024/10/01 13:22:40 by pgiroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a


FILE = main ft_verif  ft_init ft_three_sort ft_error ft_finish push_swap ft_target ft_move ft_print best_hit
INS_FILE = ft_swap ft_push ft_rotate ft_reverse_rotate


GREEN = \033[1;32m
BLUE= \033[1;34m
RED = \033[1;31m
NC = \033[0m

INCLUDE = ./libft/libft.a

FILE_DIR = ./src/
INS_DIR = ./src/instruction/
OBJ_DIR = ./obj/

FILES = $(addprefix $(FILE_DIR), $(addsuffix .c, $(FILE)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILE)))

INS_FILES = $(addprefix $(INS_DIR), $(addsuffix .c, $(INS_FILE)))
INS_OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(INS_FILE)))

all : $(NAME)
	
$(OBJ_DIR)%.o: $(FILE_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "$@ : $(GREEN)[OK]$(NC)"

$(OBJ_DIR)%.o: $(INS_DIR)%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "$@ : $(GREEN)[OK]$(NC)"

$(NAME): $(LIBFT) $(OBJS) $(INS_OBJS)
	@$(CC) $(CFLAGS)  $(OBJS) $(INS_OBJS) $(INCLUDE) -o  $(NAME)
	@echo "\n$(BLUE)=============================================$(NC)\n"
	

$(LIBFT):
	@make -C $(LIBFT_PATH) all
	@clear
	@echo "\n$(BLUE)================= [ START ] =================$(NC)\n"
	@echo "libft : $(GREEN)[OK]$(NC)"

clean :
	@make clean -C ./libft
	@clear
	@echo "$(RED)========== [ OBJECT DELETED ] ==========$(NC)"
	rm -rf $(OBJ_DIR)
	@echo "clean -C ./libft"
	@echo "$(RED)========================================$(NC)"
	
fclean : clean
	@make fclean -C ./libft
	@clear
	@echo "$(RED)========== [ OBJECT / EX DELETED ] ==========$(NC)"
	rm -f $(NAME) 
	@echo "fclean -C ./libft"
	@echo "$(RED)=============================================$(NC)"
	

re : fclean all

	
.PHONY : all clean fclean re

