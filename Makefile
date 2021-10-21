# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 16:32:34 by amohiam           #+#    #+#              #
#    Updated: 2021/10/21 15:28:04 by amohiam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = bit_sort.c check_input_num.c checker_commands.c exec_push.c exec_rotate.c exec_rr.c exec_swap.c has_doubles.c input_correct.c input_to_stack.c is_number.c is_sorted.c max_min_ind.c new_atoi.c print_stack.c silent_push.c silent_rotate.c silent_rr.c silent_swap.c simplify.c sort_small.c
FLAGS = -Wall -Wextra -Werror
all : push_swap

push_swap:
	gcc -I push_swap.h $(FLAGS) $(SOURCES) main.c -c
	gcc -I push_swap.h $(FLAGS) $(SOURCES) main.c -o push_swap

bonus :
	gcc -I push_swap.h $(FLAGS) $(SOURCES) checker_main.c -c
	gcc -I push_swap.h $(FLAGS) $(SOURCES) checker_main.c -o checker

clean :
	rm -f *.o

fclean : clean
	rm -rf push_swap checker

re : fclean all