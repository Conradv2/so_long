# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c99 -g

# Source files
SRCS = ft_c_case.c \
       ft_d_i_case.c \
       ft_digit_counter.c \
       ft_hex_digit_counter.c \
       ft_hex_x_case.c \
       ft_l_fill_array.c \
       ft_normal_case.c \
       ft_p_case.c \
       ft_percent_case.c \
       ft_print_array.c \
       ft_printf.c \
       ft_putchar_fd.c \
       ft_putnbr_fd.c \
       ft_putstr_fd.c \
       ft_reverse_array.c \
       ft_s_case.c \
       ft_specifier_check.c \
       ft_string_iterate.c \
       ft_strlen.c \
       ft_u_case.c \
       ft_u_digit_counter.c \
       ft_u_putnbr_fd.c \
       ft_up_fill_array.c \
       ft_x_case.c	

# Object files (generated from the source files)
OBJS = $(SRCS:.c=.o)

# Name of the library (static library)
NAME = libftprintf.a

# Default target: build the static library
all: $(NAME)

# Rule for building the static library
# ar <- utility to create or modify an archive (static library for example)
# r <- replace contents of the archive, if object file exists it is replaced, if it doesnt exist it is created
# c <- creates archive if it doesnt exist, if it does its not overwrote, ar will create or update the archive with new files
# s <- creates index for the archive, faster lookup of symbols inside the archive 
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
# Rule for compiling the source files to object files
# -c <- only compile the source file into object file without linking to executable
# $< <- automatic variable, first prerequisite of the rule, it will be replaced with .c that is being compiled
# -o <- name of output file
# $@ <- automatic variable, refers to the target of the rule, so $@ becomes .o corresponding to the .c that is being compiled
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean the object files
# f <- force removing files without confirmation
clean:
	rm -f $(OBJS)

# Clean object files and static library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Ensure that the library is always compiled
.PHONY: all clean fclean re