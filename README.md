# Libft: My Personal Codam C Library

Welcome to my Libft project, a foundational coding project at Codam. This library, named "Libft" (short for Library Forty-Two), was my very first Codam assignment. At Codam, the use of standard library functions like `strcmp` is forbidden, this way we are encouraged to truly understand what is happening inside all functions we call. Besides the challenge of mimicking a lot of the standard library functions, this was also my first time creating a Makefile and properly using the 42-norminette formatting guidelines. These guidelines encourage us to keep our functions concise (max 25 lines) and readable (separate variable declarations).

## Project Structure

The library is organized into several directories, each containing mandatory files that were essential for the completion of the project:

- **Character**: Functions related to character manipulation.
- **General**: General-purpose utility functions.
- **Linked List**: Functions for handling linked lists.
- **Memory**: Functions for memory management.
- **String**: String manipulation functions.
- **Write**: Functions for writing output.

## Additional Projects

In addition to the core Libft functions, I have included two other projects that I developed at a later stage:

- **ft_printf**: A custom implementation of the `printf` function.
- **get_next_line**: A function to read a line from a file descriptor.

These projects were separate assignments at CODAM but are useful additions to the library.

## Vector Library

During a later project, Minishell, @LithiumOx and I developed a vector library located in the `vector` directory. This library allows for the use of vectors in C, similar to their functionality in C++. Upon initialization, the vector sets a size that is a multiple of the size of the elements it will store. If there is no space for new elements, the vector will double in size. It supports random access and includes a function, `ft_vec_free`, to free all elements within the vector.

## Conclusion

Libft is the start of my programming experience at Codam and as a library, it's used in all my future C projects.

Feel free to use the code for inspiration.