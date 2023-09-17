# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 19:27:14 by roglopes          #+#    #+#              #
#    Updated: 2023/09/17 15:29:40 by roglopes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ./library/libftprintf.a
FOLDER_OBJ	= ./objects/

SOURCES		= ft_printf.c \
			ft_putchar.c  \
			ft_putstr.c   \
			ft_putptr.c   \
			ft_putnbr.c   \
			ft_putunsign.c\
			ft_puthex.c   \

SOURCES		:= $(addprefix ./sources/,$(SOURCES))
OBJECTS		= $(SOURCES:./sources/%.c=$(FOLDER_OBJ)%.o)

INCLUDES	= ./includes/
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all: $(FOLDER_OBJ) $(NAME)

$(FOLDER_OBJ):
	mkdir -p $(FOLDER_OBJ)

$(NAME): $(OBJECTS)
	@echo "$(GREEN)◞( ､ᐛ)､＿/ The Makefile of $(NAME) has been compiled!$(DEF_COLOR)"

$(FOLDER_OBJ)%.o: ./sources/%.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)
	@ar rcs $(NAME) $@
	@echo "Add $@ to $(NAME)"

clean:
	@$(RM) $(OBJECTS) 
	@echo "$(BLUE) $(NAME) Object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE) $(NAME) Executable files cleaned!$(DEF_COLOR)"

re: fclean all
	@echo "$(BLUE) $(NAME) Cleaned and rebuilt everything!$(DEF_COLOR)"

.PHONY: all clean fclean re