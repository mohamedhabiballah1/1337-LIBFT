# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 20:16:34 by mhabib-a          #+#    #+#              #
#    Updated: 2022/10/23 22:16:42 by mhabib-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strnstr.c ft_strmapi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_striteri.c ft_split.c ft_strlcat.c ft_strlcpy.c
OBJ = $(SRC:.c=.o)
OBJBONUS = $(BONUS:.c=.o)
INC = -L.
LCC = ar rc 
LFLAG = -lft
NAME = libft.a
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all :$(NAME)
${NAME} :$(OBJ)
	$(LCC) $(NAME) $(OBJ)
bonus : $(OBJ) $(OBJBONUS)
	$(LCC) $(NAME) $(OBJ) $(OBJBONUS)
run : 
	$(CC) main.c $(LFLAGS) $(INC) $(LFLAG) 
clean:
	$(RM) $(NAME)
oclean: 
	$(RM) $(OBJ) $(OBJBONUS) 
fclean: clean oclean
re : fclean all
