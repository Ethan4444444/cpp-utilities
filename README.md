# cpp-utilities
A small collection of useful functions for common tasks in C++ programming.

Includes the following functionalities:

- `util::println(value)`: a collection of overloads to write `value`, followed by a newline, to the console. The buffer is not flushed.
- `util::stob(s)`: a function to convert a string `s` to a boolean variable. Throws a `domain_error()` if `s` is not equal to "true", "false", "0", or "1".
