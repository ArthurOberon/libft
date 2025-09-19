# 📚 Libft

## 📝 About

**Libft** is the very first project from **École 42** introducing students to **C programming** and the concept of building their own **library**.
The objective is to implement a custom **library of standard C functions**, along with **additional helper functions** and **linked list utilities**, to understand how these **essential functions work internally** and to create a **foundation** that can be reused in future projects.

---

## 📂 Repository Structure

```sh
libft/
├── ft_*.c          # All function implementations
├── libft.h         # Header file with function prototypes
├── Makefile        # Build rules for the library
└── libft.a         # Compiled library (output)
```

The repository is organized into three main parts:
* Mandatory functions
* Bonus functions
* Personal functions

### Mandatory functions

| Mandatory functions | Mandatory functions   | Mandatory functions  | Mandatory functions  |
|	---		|	---		|	---			|	---			|
| isalpha	| memmove	| memcmp		| ft_itoa		|
| isdigit	| strlcpy	| strnstr		| ft_strmapi	|
| isalnum	| strlcat	| atoi			| ft_striteri	|
| isascii	| toupper	| calloc		| ft_putchar_fd	|
| isprint	| tolower	| strdup		| ft_putstr_fd	|
| strlen 	| strchr	| ft_substr		| ft_putendl_fd	|
| memset 	| strrchr	| ft_strjoin	| ft_putnbr_fd	|
| bzero 	| strncmp	| ft_strtrim	|        		|
| memcpy 	| memchr	| ft_split		|        		|

### Bonus functions

| Bonus functions | Bonus functions   | Bonus functions |
|	---				|	---				|	---			|
| ft_lstnew			| ft_lstlast		| ft_lstclear	|
| ft_lstadd_front	| ft_lstadd_back	| ft_lstiter	|
| ft_lstsize		| ft_lstdelone		| ft_lstmap		|

### Personal functions

| Personal functions | Personal functions   | Personal functions | Personal functions |
|	---		|	---		|	---			| ---			|
| ft_abs	| ft_putnbr	| ft_putchar	| ft_putendl	|
| ft_putstr	| ft_nbrlen	| ft_isspace	|				|

---

## ⚙️ Usage

### 🏗️ Compilation

```sh
make			# build libft.a with mandatory functions
make			# build libft.a with bonus functions
make			# build libft.a with personal functions
make clean		# remove object files
make fclean		# remove object files + libft.a
make re			# rebuild everything
```

### 📌 Using the Library

To use the library with your own program, simply compile it together with your source file:

```sh
gcc own_main.c -L. -lft -o own_test
```

* `-L.` → tells the compiler to look for libraries in the current directory *(`.`)*.
* `-l ft` → links against the library named **libft.a** *(`lib` prefix is implicit)*.

---
