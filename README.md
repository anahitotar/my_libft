*This project has been created as part of the 42 curriculum by <aotaryan>*

# Description
This project consists of creating a personal C library (libft) implementing standard functions commonly found in the C standard library.  
The goal is to practice C programming fundamentals, memory management, and writing reusable code.  
It provides functions for character checks, string manipulation, memory operations, and more.

# Instructions

## Makefile

` make `        # build the project (default target)

` make all `    # same as make (if defined)

` make clean `  # remove object files (*.o)

` make fclean ` # remove object files + executable

` make re `     # fclean + all (full rebuild)

` .PHONY: all clean fclean re `

` .PHONY ` is a special directive for Make. It says:

"Make these target names as dummy names, not files."

This is  important,cause Make usually thinks a target is a file.
For example, if we have a file called clean in a folder and we type make clean, Make might think:

"The file clean already exists, so there's nothing to do."

## Compilation
1. Navigate to the library folder and build the library:

` cd my_libft `

` make `

This will compile all .c files and create the static library ` libft.a `.

2. Then build the tests:

` cd ../tests `

` make `

The Makefile here will link main.o with ` ../my_libft/libft.a `.

# Usages
When implementing functions, the ` man ` command in the terminal is often helpful.

The links listed below also helped during the work.

# Library Overview
The `libft` library includes:

- **Character checks:** 

For the character classification functions (isalpha, isdigit,
isalnum, isascii, isprint), the return value must be:

• 1 if the character matches the tested class

• 0 if the character does not match

`ft_isalpha` - [isalpha()](https://www.programiz.com/c-programming/library-function/ctype.h/isalpha)

`ft_isdigit` - [isdigit()](https://www.programiz.com/c-programming/library-function/ctype.h/isdigit)

`ft_isalnum` - [isalnum()](https://www.programiz.com/c-programming/library-function/ctype.h/isalnum)

`ft_isascii` - [ASCII Table](https://www.ascii-code.com)

`ft_isprint` - [isprint()](https://www.programiz.com/c-programming/library-function/ctype.h/isprint)

- **String functions:** 

`ft_strlen`

`ft_strlcpy`

`ft_strlcat`

`ft_strchr`

`ft_strrchr`

`ft_strncmp`

`ft_strnstr`

`ft_strdup`
How strdup() works:

Memory allocation: The function automatically allocates memory for the new string.
Copying: It copies the contents of the original string (including the null terminator \0) into the newly allocated memory.
Return pointer: It returns a pointer to the beginning of the copied string.
Freeing: The calling code is responsible for freeing this memory using free().

- **Memory manipulation:**

`ft_memset`

`ft_bzero`

`ft_memcpy`

`ft_memmove`

`ft_memchr`

`ft_memcmp`

`ft_calloc`

- **Character conversion:** 

`ft_toupper` - [toupper()](https://www.geeksforgeeks.org/c/toupper-function-in-c/)

`ft_tolower` 

- **Number/string conversion:** 

`ft_atoi`

