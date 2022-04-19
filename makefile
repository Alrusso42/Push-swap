# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 09:17:22 by alrusso           #+#    #+#              #
#    Updated: 2022/04/19 09:22:11 by alrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	push_swap

all :	
		make -C libft
		cc -Wall -Werror -Wextra -o $(NAME) Libft/libft.a push_swap.c \
			push_check_input.c push_swap_struct.c push_sort.c push_swap_instruction.c \
			sort3.c sort4.c sort5.c sort6.c sortall.c push_index.c

clean :
		make clean -C libft
		rm $(NAME)

fclean :
		make fclean -C libft
		rm $(NAME)

re : fclean all