# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/08 02:10:01 by acortes-          #+#    #+#              #
#    Updated: 2020/01/23 18:55:10 by acortes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS =	srcs/ft_all_values_to_start.c srcs/ft_super_function.c srcs/ft_x.c srcs/ft_big_x.c  srcs/ft_c.c srcs/ft_d.c srcs/ft_i.c \
		srcs/ft_my_args.c srcs/ft_new_me.c srcs/ft_p.c srcs/ft_printf.c srcs/ft_rest.c srcs/ft_restart_values.c srcs/ft_s.c \
		srcs/ft_u.c srcs/ft_write_and_sum.c srcs/ft_convert_to_hex.c srcs/ft_functions1.c srcs/ft_functions2.c srcs/ft_functions3.c
CFLAGS = -Wall -Wextra -Werror
COMP =	${OBJS:.c=.o}
NAME = ft_printf.a

all: $(NAME)

$(NAME): ${OBJS} ft_printf.h
	@gcc -c ${CFLAGS} ${OBJS}
	@mv *.o srcs
	@ar rc ${NAME} ${COMP}
clean:
	@rm -f ${COMP}
fclean:	clean
	@rm -f ${NAME}
re: fclean all
