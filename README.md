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
##PART 1
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

`ft_strlen` – Returns the length of a string (not counting the terminating \0).

`ft_strlcpy` – Copies a string into a destination buffer of given size, ensuring null-termination.

`ft_strlcat` – Appends a string to the end of another, up to a given buffer size, ensuring null-termination.

`ft_strchr` – Finds the first occurrence of a character in a string.

`ft_strrchr` – Finds the last occurrence of a character in a string.

`ft_strncmp` – Compares up to n characters of two strings.

`ft_strnstr` – Finds a substring in a string, searching at most len characters.

`ft_strdup` – Duplicates a string by allocating new memory and copying its contents.


- **Memory manipulation:**

`ft_memset` – Fills a block of memory with a specified byte.

`ft_bzero` – Sets a block of memory to zero.

`ft_memcpy` – Copies n bytes from source to destination (undefined if memory overlaps).

`ft_memmove` – Copies n bytes from source to destination safely, even if memory regions overlap.

`ft_memchr` – Searches for a byte in a memory block and returns a pointer to it.

`ft_memcmp` – Compares n bytes of two memory blocks.

`ft_calloc` – Allocates memory for an array of elements and initializes it to zero.


- **Character conversion:** 

`ft_toupper` - [toupper()](https://www.geeksforgeeks.org/c/toupper-function-in-c/)

`ft_tolower` 

- **Number/string conversion:** 

`ft_atoi` - Converts a string to an integer.

##PART 2
`ft_substr`

Prototype char `*ft_substr(char const *s, unsigned int start, size_t len);`
Parameters s: The original string from which to create the substring.
           start: The starting index of the substring within ’s’.
           len: The maximum length of the substring.
Return Value: The substring. NULL if the allocation fails.
Description : Allocates memory (using malloc(3)) and returns asubstring from the string ’s’.
The substring starts at index ’start’ and has a maximum length of ’len’.

`ft_strjoin`
Prototype char `*ft_strjoin(char const *s1, char const *s2);`
Parameters s1: The prefix string.
           s2: The suffix string.
Return Value The new string. NULL if the allocation fails.
Description Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating
’s1’ and ’s2’.

`ft_strtrim`
Prototype char `*ft_strtrim(char const *s1, char const *set);`
Parameters s1: The string to be trimmed.
          set: The string containing the set of characters to be removed.
Return Value The trimmed string. NULL if the allocation fails.
Description Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.

`ft_split`
Prototype `char **ft_split(char const *s, char c);`
Files to Submit -
Parameters s: The string to be split.
c: The delimiter character.
Return Value The array of new strings resulting from the split.
NULL if the allocation fails.
External Function malloc, free
Description Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter. The array must
end with a NULL pointer.

`ft_itoa`
Prototype char `*ft_itoa(int n);`
Parameters n: The integer to convert.
Return Value The string representing the integer.NULL if the allocation fails.
Description Allocates memory (using malloc(3)) and returns
a string representing the integer received as an argument. Negative numbers must be handled.

`ft_strmapi`
Prototype char `*ft_strmapi(char const *s, char (*f)(unsigned int, char));`
Parameters s: The string to iterate over.
           f: The function to apply to each character.
Return Value The string created from the successive applicationsof ’f’. Returns NULL if the allocation fails.
External Function malloc
Description Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to store the
results from the successive applications of f.

`ft_striteri`
Prototype `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
Parameters s: The string to iterate over.
f: The function to apply to each character.
Return Value None
External Function None
Description Applies the function ’f’ to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.


- **Functions to write to a file descriptor** -

`ft_putchar_fd`
Prototype `void ft_putchar_fd(char c, int fd);`
Files to Submit -
Parameters c: The character to output.
          fd: The file descriptor on which to write.
Return Value None
External Function write
Description Outputs the character ’c’ to the specified file
descriptor.

`ft_putstr_fd`
Prototype `void ft_putstr_fd(char *s, int fd);`
Files to Submit -
Parameters s: The string to output.
fd: The file descriptor on which to write.
Return Value None
External Function write
Description Outputs the string ’s’ to the specified file
descriptor.

`ft_putendl_fd`
Prototype `void ft_putendl_fd(char *s, int fd);`
Files to Submit -
Parameters s: The string to output.
fd: The file descriptor on which to write.
Return Value None
External Function write
Description Outputs the string ’s’ to the specified file
descriptor followed by a newline.

`ft_putnbr_fd`
Prototype `void ft_putnbr_fd(int n, int fd);`
Files to Submit -
Parameters n: The integer to output.
fd: The file descriptor on which to write.
Return Value None
External Function write
Description Outputs the integer ’n’ to the specified file
descriptor.

#PART 3
- **Lists** -

`ft_lstnew`
**Parameters** content: The content to store in the new node.
Return Value A pointer to the new node
Description Allocates memory (using malloc(3)) and returns
a new node. The ’content’ member variable is
initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.

`ft_lstadd_front`
**Parameters** lst: The address of a pointer to the first node of
a list.
new: The address of a pointer to the node to be
added.
Return Value None
External Function None
Description Adds the node ’new’ at the beginning of the list

`ft_lstsize`
**Parameters** lst: The beginning of the list.
Return Value The length of the list
External Function None
Description Counts the number of nodes in the list.

`ft_lstlast`
**Parameters** lst: The beginning of the list.
Return Value Last node of the list
External Function None
Description Returns the last node of the list.

`ft_lstadd_back`
**Parameters** lst: The address of a pointer to the first node of
a list.
new: The address of a pointer to the node to be
added.
Return Value None
External Function None
Description Adds the node ’new’ at the end of the list.

`ft_lstdelone`
**Parameters** lst: The node to free.
del: The address of the function used to delete
the content.
Return Value None
External Function free
Description Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node.

`ft_lstclear`
**Parameters** lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return Value None
External Function free
Description Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.

`ft_lstiter`
Function Name `ft_lstiter`
Prototype `void ft_lstiter(t_list *lst, void (*f)(void *));`
Files to Submit -
**Parameters** lst: The address of a pointer to a node.
                 f: The address of the function to apply to each node’s content.
Return Value None
External Function None
Description Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.

`ft_lstmap`
**Parameters** lst: The address of a pointer to a node.
                 f: The address of the function applied to each node’s content.
               del: The address of the function used to delete a node’s content if needed.
Return Value The new list. NULL if the allocation fails.
External Function malloc, free
Description Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.

