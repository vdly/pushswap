This project has been created as part of the 42 curriculum by JODEHII.

# Description

This project is a rite of passage of understanding and mastering the fundamentals in C! Libft is my own recreation of some functions from the C Standard Library (libc). This includes functions for:

* **Character Checks**

* **Memory Manipulation**

* **String Manipulation**

* **Memory Management**

* **File Descriptors**

* **Linked List**

# Instructions

### To create libft.a, run:

* `__make__`
* `__make all__`
* `__make libft.a__`

### To remove all object files/library, run:

* `__make clean__`	- clear all (\*.o) files

* `__make flcean__`	- clear all (\*.o) files and library

### To remake object files and library:

* `__make re__`


# Resources
* https://linux.die.net/man/
* https://www.geeksforgeeks.org/
* AI was also use to further understanding of project


## Functions

* ft_alnum	- a function that checks if `c` is alphanumeric

* ft_atoi		- a function that converts ascii character to integer

* ft_bzero	- a function that takes in memory it's pointing to and erases `n` bytes

* ft_isalpha	- a function that checks if `c` is (A - Z) && (a - z)

* ft_isascii	- a function that checks if `c` is an ascii character

* ft_isdigit	- a function that checks if `c` is a digit 

* ft_isprint	- a function that checks if `c` is a printable character

* ft_memcpy	- a function that copies `n` bytes from memory `src` to memory `dest`

* ft_memset	- a function that fills `n` bytes of the memory area pointed to by `s` with `c`

* ft_strlcpy	- a function that copies `n` bytes from `src` to `dest`, ensuring NULL-terminated

* ft_strlen	- a function that calculates the length of `s`

* ft_tolower	- a function that returns lowercase equivalent if uppercase

* ft_toupper	- a function that returns uppercase equivalent if lowercase

