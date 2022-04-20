# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 09:17:22 by alrusso           #+#    #+#              #
#    Updated: 2022/04/20 09:39:53 by alrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	push_swap

all :	
		make -C Libft
		cc -Wall -Werror -Wextra -o $(NAME) Libft/libft.a push_swap.c \
			push_check_input.c push_swap_struct.c push_sort.c push_swap_instruction.c \
			push_sort_3.c push_sort_4.c push_sort_5.c push_sort_6.c push_sort_all.c push_index.c

clean :
		make clean -C Libft
		rm $(NAME)

fclean :
		make fclean -C Libft
		rm $(NAME)

re : fclean all