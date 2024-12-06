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

NAME = libft.a

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

DEPS = libft.h

####################
### Source files ###
####################

SRC_DIR_LIBCTYPE = ./libctype/
LIBCTYPE = ${SRC_DIR_LIBCTYPE}ft_isalpha.c \
	   ${SRC_DIR_LIBCTYPE}ft_isdigit.c \
	   ${SRC_DIR_LIBCTYPE}ft_isalnum.c \
	   ${SRC_DIR_LIBCTYPE}ft_isascii.c \
	   ${SRC_DIR_LIBCTYPE}ft_isprint.c \
	   ${SRC_DIR_LIBCTYPE}ft_ispunct.c \
	   ${SRC_DIR_LIBCTYPE}ft_isupper.c \
	   ${SRC_DIR_LIBCTYPE}ft_islower.c \
           ${SRC_DIR_LIBCTYPE}ft_toupper.c \
	   ${SRC_DIR_LIBCTYPE}ft_tolower.c \
	   ${SRC_DIR_LIBCTYPE}ft_atoi.c \

SRC_DIR_LIBSTRING = ./libstring/
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

SRC_DIR_LIBSTDLIB = ./libstdlib/
LIBSTDLIB = ${SRC_DIR_LIBSTDLIB}ft_calloc.c \
	    ${SRC_DIR_LIBSTDLIB}ft_memdel.c \

SRC_DIR_LIBUTILS = ./libutils/
LIBUTILS = ${SRC_DIR_LIBUTILS}ft_itoa.c \
	   ${SRC_DIR_LIBUTILS}ft_putchar_fd.c \
	   ${SRC_DIR_LIBUTILS}ft_putstr_fd.c \
	   ${SRC_DIR_LIBUTILS}ft_putendl_fd.c \
	   ${SRC_DIR_LIBUTILS}ft_putnbr_fd.c \
	   ${SRC_DIR_LIBUTILS}ft_split.c \
	   ${SRC_DIR_LIBUTILS}ft_strjoin.c \
	   ${SRC_DIR_LIBUTILS}ft_strmapi.c \
	   ${SRC_DIR_LIBUTILS}ft_strtrim.c \
	   ${SRC_DIR_LIBUTILS}ft_substr.c \
	   ${SRC_DIR_LIBUTILS}ft_striteri.c \

SRC_DIR_LIBLIST = ./liblist/
LIBLIST = ${SRC_DIR_LIBLIST}ft_lstnew.c \
	  ${SRC_DIR_LIBLIST}ft_lstadd_front.c \
	  ${SRC_DIR_LIBLIST}ft_lstsize.c \
	  ${SRC_DIR_LIBLIST}ft_lstlast.c \
	  ${SRC_DIR_LIBLIST}ft_lstadd_back.c \
	  ${SRC_DIR_LIBLIST}ft_lstdelone.c \
	  ${SRC_DIR_LIBLIST}ft_lstclear.c \
	  ${SRC_DIR_LIBLIST}ft_lstmap.c \
	  ${SRC_DIR_LIBLIST}ft_lstiter.c \

SRC_DIR_LIBPRINTF = ./libprintf/
LIBPRINTF = ${SRC_DIR_LIBPRINTF}ft_printf.c \
	    ${SRC_DIR_LIBPRINTF}ft_spec_conv.c \
	    ${SRC_DIR_LIBPRINTF}ft_putchar_fd_count.c \
	    ${SRC_DIR_LIBPRINTF}ft_putstr_fd_count.c \
	    ${SRC_DIR_LIBPRINTF}ft_putnbr_fd_count.c \
	    ${SRC_DIR_LIBPRINTF}ft_put_ui_fd_count.c \
	    ${SRC_DIR_LIBPRINTF}ft_itohex.c \

SRC_DIR_LIBGNL = ./libgnl/
LIBGNL = ${SRC_DIR_LIBGNL}ft_gnl.c \
	 ${SRC_DIR_LIBGNL}ft_gnl_utils.c \

LIBFT = ${LIBCTYPE} ${LIBSTRING} ${LIBSTDLIB} ${LIBUTILS} ${LIBLIST} \
	${LIBPRINTF} ${LIBGNL}
SRC = ${LIBFT}

### Object files
OBJ = $(SRC:.c=.o)

### Default rules (compile the executable)
all: $(NAME)
	@echo ""
	@echo "       .-\"\"\"\"\"\"\"\"\"\"\"\"\"-."
	@echo "     .'                   '."
	@echo "    /   .-\"\"\"\"\"\"\"\"\"\"\"\"-.  \\"
	@echo "   ;   /                 \\  ;"
	@echo "   |  ;                   ;  |"	
	@echo "   |  |   .-.       .-.   |  |"
	@echo "   ;  |  (   )     (   )  |  ;"
	@echo "    \\  ;  '-'       '-'  ;  /"
	@echo "     '.                   .'"
	@echo "       '-.              .-'"
	@echo "         '-.          -'"
	@echo "            '-.- .- .'"
	@echo ""
	@echo ""
	@echo "Marvin doesn't really care about your compilation."
	@echo "But it's done anyway, so congratulations!"
	@echo ""

### Compile .c files into .o files
# $< = current source file ; $@ = matching object file
# The -c flag asks the compiler not to link the files
# and to produce only the object file.
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

### Create a static library
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

############################################
# Those targets are not files but commands
.PHONY: all clean fclean re bonus
