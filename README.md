# Libft
![Build Status](https://img.shields.io/badge/build-passing-green)
![License](https://img.shields.io/badge/license-MIT-blue)

## Description
Libft is a project at 42 that involves creating a personal C library. The goal is to implement a collection of standard functions from the C standard library, as well as some additional utility functions. This project helps students deepen their understanding of memory management, data structures, and algorithm implementation, while also reinforcing their ability to write efficient and reusable code. It serves as a foundational project that students can use throughout their 42 curriculum.

**Technologies Used:**
- C

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Contributing](#contributing)
- [Acknowledgments](#acknowledgments)

## Installation

To use this project locally:

1. Clone this repository:
   ```bash
   git clone https://github.com/jack-pepper/Libft.git
   ```

2. Run make to compile the library libft.a:
   ```bash
   make
   ```

3. Include the library to your project files:
   ```bash
   #include "libft.h"
   ```

## Usage

1. The main purpose of this project is to give a better understanding of the inner workings of the functions implemented and how memory management, data structures, and algorithms are handled at a low level in C. 
2. If you are a student, I would not recommend directly copying my implementations from Libft into your own projects. Their purpose is to provide an alternative reference that can help you compare your own work, that can and should differ as this is part of the learning process. Use it as a way to understand the correct behavior and compare your approach to handle specific scenarios.
3. Libft is designed to be modular, so you can easily add or remove functions depending on your needs. 

## Features

### Standard Libraries Implementations

#### LIBCTYPE (From ctype.h)
- ft_isalpha.c - Checks if a character is an alphabetic letter (A-Z or a-z).
- ft_isdigit.c - Checks if a character is a digit (0-9).
- ft_isalnum.c - Checks if a character is either alphabetic or a digit.
- ft_isascii.c - Checks if a character is a valid ASCII character.
- ft_isprint.c - Checks if a character is printable (including space).
- ft_ispunct.c - Checks if a character is a punctuation character.
- ft_isupper.c - Checks if a character is uppercase.
- ft_islower.c - Checks if a character is lowercase.
- ft_toupper.c - Converts a lowercase letter to uppercase.
- ft_tolower.c - Converts an uppercase letter to lowercase.
- ft_atoi.c - Converts a string to an integer, handling whitespace and signs.

#### LIBSTRING (From string.h)
- ft_strlen.c - Returns the length of a string (excluding the null terminator).
- ft_memset.c - Fills a block of memory with a specified value.
- ft_bzero.c - Sets a block of memory to zero.
- ft_memcpy.c - Copies a specified number of bytes from one memory location to another.
- ft_memmove.c - Similar to memcpy, but handles overlapping memory areas safely.
- ft_strlcpy.c - Copies a string to a destination buffer, ensuring it is null-terminated.
- ft_strlcat.c - Concatenates two strings, ensuring the result is null-terminated.
- ft_strchr.c - Finds the first occurrence of a character in a string.
- ft_strrchr.c - Finds the last occurrence of a character in a string.
- ft_strncmp.c - Compares two strings up to a specified number of characters.
- ft_memchr.c - Searches for a character in a block of memory.
- ft_memcmp.c - Compares two blocks of memory byte by byte.
- ft_strdel.c - Frees a mallocated string and sets the pointer to null.
- ft_strdup.c - Creates a copy of a string in dynamically allocated memory.
- ft_strnstr.c - Finds the first occurrence of a substring in a string, searching up to a specified length.
- ft_strrev.c - Reverses a string in place.

#### LIBSTDLIB (From stdlib.h)
- ft_calloc.c - Allocates memory for an array and initializes it to zero.
- ft_memdel.c - (Non-standard) Frees allocated memory and sets the pointer to null. 

### LIBUTILS (Additional utility functions)
- ft_itoa.c - Converts an integer to a string representation.
- ft_putchar_fd.c - Writes a single character to a file descriptor.
- ft_putstr_fd.c - Writes a string to a file descriptor.
- ft_putendl_fd.c - Writes a string followed by a newline to a file descriptor.
- ft_putnbr_fd.c - Writes an integer as a string to a file descriptor.
- ft_split.c - Splits a string into an array of substrings, using a delimiter.
- ft_strjoin.c - Concatenates two strings into a new string.
- ft_strmapi.c - Applies a function to each character of a string and returns a new string with the results.
- ft_strtrim.c - Removes leading and trailing whitespace (or specified characters) from a string.
- ft_substr.c - Extracts a substring from a string, starting at a given position and with a specified length.
- ft_striteri.c - Applies a function to each character of a string, passing both the character and its index.

### LIBLIST (Linked lists handling Functions)
- ft_lstnew.c - Creates a new linked list node with a given content.
- ft_lstadd_front.c - Adds a new node at the front of a linked list.
- ft_lstsize.c - Returns the size (number of elements) of a linked list.
- ft_lstlast.c - Returns the last node in a linked list.
- ft_lstadd_back.c - Adds a new node at the end of a linked list.
- ft_lstdelone.c - Deletes a node from a linked list and frees its memory.
- ft_lstclear.c - Clears a linked list by deleting all its nodes and freeing their memory.
- ft_lstmap.c - Applies a function to each element in a linked list and returns a new list with the modified elements.
- ft_lstiter.c - Iterates over a linked list and applies a function to each element.

### LIBPRINTF
- ft_printf.c - Custom version of printf. Handles formatted output and conversion specifiers.
- ft_spec_conv.c - Handles the conversion of specifiers d, i, u, p, x, X, s, c, % and the flags +, <space>, #).
- conv_num.c - Handles numerical conversion specifiers (d, i, u).
- conv_hex.c - Handles hexadecimal notation (p, x, X).
- conv_txt.c - Handles text (s, c, %).
- ft_itohex.c -Converts an integer to its hexadecimal representation in string format.
- hex_set_case.c - Adjusts the case of hexadecimal letters.
- hex_handle_zero.c - Ensures correct output for zero values in hexadecimal conversions (0x0).
- hex_format_string.c - Formats hexadecimal string adding prefixes 0x and 0X.
- ft_putchar_fd_count.c - Outputs a character to a file descriptor and returns the number of characters written.
- ft_putstr_fd_count.c - Outputs a character to a file descriptor and returns the number of characters written.
- ft_putnbr_fd_count.c - Outputs an integer as a string to a file descriptor and returns the numbers of characters written.
- ft_put_ui_fd_count.c - Outputs an unsigned integer as a string to a file descriptor and returns the number of characters written.

### LIBGNL - Get Next Line
- ft_gnl: Reads from a file descriptor and returns one line at a time. 
- read_and_stash: Handles the reading and buffering process until End Of File (EOF) is reached.
- stash_manager: Manages the static buffer stash to preserve the data from previous reads over to the next read.
- seize_line: Extracts and returns the next line from the buffer.
- seize_eof: Handles EOF and returns data in stash if necessary.
- clean_stash: Frees the stash and sets the pointer to null.

### Extra functions
As my cursus progresses and new challenges arise, I plan to expand this library by adding additional functions to meet specific project needs. These updates will enhance the functionality and versatility of the library.

## Contributing

Contributions are welcome! If you notice any areas where the implementation can be improved or have suggestions for new features, feel free to contribute. I am always willing to learn.

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## Acknowledgments

- Thanks to 42 and to Marvin for being such an inspiration.