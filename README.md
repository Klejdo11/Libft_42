# Libft_42
Libft is a custom implementation of standard C library functions, created as part of the 42 School curriculum. This project aims to deepen understanding of C programming by re-creating essential functions from scratch, providing a solid foundation for future projects.
Table of Contents
Introduction
Features
Libc Functions
Additional Functions
Bonus Functions
Personal Functions
Installation
Usage
Contributing
License
Introduction
Libft is the first coding project in the 42 school Core Curriculum. The main goal is to recreate various standard C library functions and some additional ones, which will be used throughout our curriculum. This project helps students understand the basic building blocks of the C programming language.

Features
Libft consists of several sections:

Libc Functions
Some of the standard C library functions we've re-coded include:

Memory functions: memset, bzero, memcpy, memccpy, memmove, memchr, memcmp
String manipulation functions: strlen, strdup, strcpy, strncpy, strcat, strncat, strlcat, strchr, strrchr, strstr, strnstr, strcmp, strncmp
Character check functions: isalpha, isdigit, isalnum, isascii, isprint
String to integer conversion function: atoi
Additional Functions
These functions include:

ft_memdel: Deallocates memory from the input address and sets it to NULL.
ft_bzero: Sets every character in the string to '\0'.
ft_striter: Applies a function to each character of a string.
ft_strmap: Applies a function to each character of a string to create a new string.
ft_strmapi: Applies a function to each character of a string to create a new string, passing the character index.
ft_strsub: Extracts a substring from a string.
ft_strjoin: Concatenates two strings into a new string.
ft_strtrim: Trims leading and trailing whitespace from a string.
ft_strsplit: Splits a string into an array of strings based on a delimiter.
ft_itoa: Converts an integer to a string.
ft_putchar: Outputs a character.
ft_putstr: Outputs a string.
ft_putendl: Outputs a string followed by a newline.
ft_putnbr: Outputs an integer.
ft_putchar_fd: Outputs a character to a file descriptor.
ft_putstr_fd: Outputs a string to a file descriptor.
ft_putendl_fd: Outputs a string followed by a newline to a file descriptor.
ft_putnbr_fd: Outputs an integer to a file descriptor.
Bonus Functions
These functions are mainly for manipulating linked lists:

ft_lstnew: Creates a new list element.
ft_lstdelone: Deletes a single list element.
ft_lstdel: Deletes an entire list.
ft_lstadd: Adds a new element to the beginning of a list.
ft_lstiter: Applies a function to each element of a list.
ft_lstmap: Applies a function to each element of a list to create a new list.
Personal Functions
These are custom functions you find useful and decide to include in your library.

Installation
To get a local copy up and running, follow these steps:

Clone the repository: git clone https://github.com/Miami05/Libft_42.git
Navigate to the project directory: cd libft
Compile the library: Run make to create a libft.a file.
