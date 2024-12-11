# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmalie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 09:35:38 by mmalie            #+#    #+#              #
#    Updated: 2024/11/14 09:35:45 by mmalie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###################################################
### Name of the file obtained after compilation ###
###################################################

NAME = libstring.a

############################
### Compilation settings ###
############################

CC=cc
CFLAGS=-Wall -Wextra -Werror

AR=ar
ARFLAGS=-rcs

####################
### Dependencies ###
####################

DEPS_LIBFT = ../libft.h
DEPS = libstring.h

####################
### Source files ###
####################

LIBSTRING = ${SRC_DIR_LIBSTRING}ft_bzero.c \
	    ${SRC_DIR_LIBSTRING}ft_memchr.c \
	    ${SRC_DIR_LIBSTRING}ft_memcmp.c \
	    ${SRC_DIR_LIBSTRING}ft_memcpy.c \
	    ${SRC_DIR_LIBSTRING}ft_memmove.c \
	    ${SRC_DIR_LIBSTRING}ft_memset.c \
	    ${SRC_DIR_LIBSTRING}ft_strchr.c \
	    ${SRC_DIR_LIBSTRING}ft_strdel.c \
	    ${SRC_DIR_LIBSTRING}ft_strdup.c \
	    ${SRC_DIR_LIBSTRING}ft_strlcat.c \
	    ${SRC_DIR_LIBSTRING}ft_strlcpy.c \
	    ${SRC_DIR_LIBSTRING}ft_strlen.c \
	    ${SRC_DIR_LIBSTRING}ft_strncmp.c \
	    ${SRC_DIR_LIBSTRING}ft_strnew.c \
	    ${SRC_DIR_LIBSTRING}ft_strnstr.c \
	    ${SRC_DIR_LIBSTRING}ft_strrchr.c \
	    ${SRC_DIR_LIBSTRING}ft_strrev.c \

SRC = ${LIBSTRING}

####################
### Object files ###
####################

OBJ = $(SRC:.c=.o)

### Default rules (compile the executable)
all: $(NAME)

### Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

###############################
### Create a static library ###
###############################

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

#########################
### Cleaning-up rules ###
#########################

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Rule to recompile everything (execute fclean, then re)
re: fclean all

#########################
### .PHONY Exceptions ###
#########################

.PHONY: all clean fclean re bonus
