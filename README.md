*This project has been created as part of the 42 curriculum by jtravanc*

---

# libft

## Description

**libft** is the first project of the 42 Common Core curriculum. Its goal is to recreate a set of standard C library functions (`libc`) from scratch, as well as implement additional utility functions that will serve as a personal library throughout future projects in the curriculum.

The library covers a broad range of functionality, including:

- **String manipulation** — functions to inspect, copy, search, split, and transform strings (e.g., `ft_strlen`, `ft_strcpy`, `ft_strjoin`, `ft_split`).
- **Memory management** — functions to allocate, set, copy, and move blocks of memory (e.g., `ft_memset`, `ft_memcpy`, `ft_calloc`).
- **Character classification and conversion** — functions equivalent to those found in `<ctype.h>` (e.g., `ft_isalpha`, `ft_isdigit`, `ft_toupper`).
- **Numeric conversion** — functions to convert between strings and integers (e.g., `ft_atoi`, `ft_itoa`).
- **File descriptor output** — functions to write characters, strings, and numbers to a given file descriptor (e.g., `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`).
- **Linked list manipulation** — functions to create, traverse, append, and delete singly linked list nodes using the `t_list` structure (e.g., `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, `ft_lstclear`).

By building this library without relying on the standard library, the project reinforces a deep understanding of low-level C programming, memory management, and data structures.

---

## Instructions

### Requirements

- A C compiler (`cc` or `gcc`)
- `make`

### Compilation

Clone the repository and navigate to its root directory, then run:

```bash
make
```

This will compile all source files and generate the static library file `libft.a`.

### Available `make` rules

| Rule | Description |
|------|-------------|
| `make` / `make all` | Compiles the library and generates `libft.a` |
| `make clean` | Removes object files (`.o`) |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Runs `fclean` followed by `all` |

### Using the library in your project

To use `libft` in another C project, link it at compilation time:

```bash
cc your_file.c -L. -lft -I. -o your_program
```

---

## Resources

### References

- [W3Schools — C Programming](https://www.w3schools.com/) — Used to study and reinforce concepts such as linked lists and dynamic memory allocation.
- [Stack Overflow](https://stackoverflow.com/questions) — Used to answer some questions that I had during the project.

### AI Usage

- **Google Gemini** and **Claude Code (Sonnet 4.6)** were used to obtain visual explanations and examples of how **linked lists** and **pointers** work in C, helping to build a clearer mental model before implementing the functions.
