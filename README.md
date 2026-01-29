*This project has been created as part of the 42 curriculum by <aotaryan>*

# Description
This project consists of creating a personal C library (libft) implementing standard functions commonly found in the C standard library.  
The goal is to practice C programming fundamentals, memory management, and writing reusable code.  
It provides functions for character checks, string manipulation, memory operations, and more.

# Instructions

## Compilation
1. Navigate to the library folder and build the library:
```bash
cd my_libft
make
```markdown
This will compile all .c files and create the static library libft.a

2.Then build the tests:
```bash
cd ../tests
make
```markdown
The Makefile here will link main.o with ../my_libft/libft.a

# Library Overview
The `libft` library includes:

- **Character checks:** 
  `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

- **String functions:** 
  `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`

- **Memory functions:** 
  `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

- **Character conversion:** 
  `ft_toupper`, `ft_tolower`

- **Number/string conversion:** 
  `ft_atoi`, `ft_itoa`

- **File descriptor output functions:** 
  `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

