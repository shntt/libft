# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 23:42:17 by shitakah          #+#    #+#              #
#    Updated: 2025/10/22 21:30:32 by shitakah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
LIBFTEST_DIR = ../Libftest
UNITTEST_DIR = ../libft-unit-test
WARM_DIR     = ../libft-war-machine

SRC = \
	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_tolower.c \
	ft_toupper.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_memcmp.c ft_memchr.c ft_strnstr.c ft_strdup.c ft_calloc.c \
	ft_itoa.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c
	

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(SOBJS)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

bonus: $(NAME)
	@echo "[info] bonus 未実装"

SOBJS := $(SRC:.c=.so.o)

%.so.o: %.c
	$(CC) -fPIC $(CFLAGS) -c $< -o $@

libft.so: $(SOBJS)
	$(CC) -shared -o $@ $(SOBJS)

so: libft.so

.PHONY: all clean fclean re bonus so

test-libftest:
	cd $(LIBFTEST_DIR) && bash grademe.sh

test-unit:
	cd $(UNITTEST_DIR) && make re && ./run_test

test-war:
	cd $(WARM_DIR) && bash grademe.sh

.PHONY: test-libftest test-unit test-war
