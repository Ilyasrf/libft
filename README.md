# libft

A custom C library reimplementing essential standard library functions. Part of the 42 school core curriculum.

## What's in it

43 functions across three tiers, each a careful reimplementation from scratch — no shortcuts, no calling the original behind the scenes.

### Part 1 — Libc Reimplementations

| Function | Description |
|----------|-------------|
| `ft_strlen` | String length |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strchr` | First occurrence of a character in a string |
| `ft_strrchr` | Last occurrence of a character in a string |
| `ft_strncmp` | Bounded string comparison |
| `ft_strnstr` | Bounded substring search |
| `ft_strdup` | Duplicate a string with malloc |
| `ft_memset` | Fill memory with a byte value |
| `ft_bzero` | Zero out memory |
| `ft_memcpy` | Copy memory (non-overlapping) |
| `ft_memmove` | Copy memory (handles overlapping regions) |
| `ft_memchr` | Scan memory for a byte |
| `ft_memcmp` | Compare memory regions |
| `ft_calloc` | Allocate zeroed memory |
| `ft_atoi` | ASCII string to integer |
| `ft_isalpha` | Alphabetic character check |
| `ft_isdigit` | Digit character check |
| `ft_isalnum` | Alphanumeric character check |
| `ft_isascii` | ASCII character check |
| `ft_isprint` | Printable character check |
| `ft_toupper` | Uppercase conversion |
| `ft_tolower` | Lowercase conversion |

### Part 2 — Additional Utilities

| Function | Description |
|----------|-------------|
| `ft_substr` | Extract a substring |
| `ft_strjoin` | Concatenate two strings into a new one |
| `ft_strtrim` | Trim characters from both ends of a string |
| `ft_split` | Split a string by a delimiter into an array |
| `ft_itoa` | Integer to ASCII string |
| `ft_strmapi` | Apply a function to each character to create a new string |
| `ft_striteri` | Apply a function to each character in-place |
| `ft_putchar_fd` | Write a character to a file descriptor |
| `ft_putstr_fd` | Write a string to a file descriptor |
| `ft_putendl_fd` | Write a string + newline to a file descriptor |
| `ft_putnbr_fd` | Write an integer to a file descriptor |

### Bonus — Linked List Operations

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create a new list node |
| `ft_lstadd_front` | Add a node to the front |
| `ft_lstadd_back` | Add a node to the back |
| `ft_lstsize` | Count list nodes |
| `ft_lstlast` | Get the last node |
| `ft_lstdelone` | Delete a single node |
| `ft_lstclear` | Delete and free an entire list |
| `ft_lstiter` | Iterate and apply a function to each node's content |
| `ft_lstmap` | Iterate, apply a function, and build a new list |

## Build

```sh
make        # compile the library → libft.a
make bonus  # include linked list functions
make clean  # remove object files
make fclean # remove object files + libft.a
make re     # full rebuild
```

## Usage

1. Include the header:

```c
#include "libft.h"
```

2. Compile your project with the library:

```sh
cc -Wall -Wextra -Werror your_file.c -L. -lft
```

Or compile everything together:

```sh
cc -Wall -Wextra -Werror *.c -L. -lft -o your_program
```

## License

42 school project. Use it, learn from it, don't pretend you wrote it.
