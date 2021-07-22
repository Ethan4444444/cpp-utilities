# cpp-utilities
A small collection of useful functions for common tasks in C++ programming.

Includes the following functionalities:

- `util::println(value)`: a collection of overloads to write `value`, followed by a newline, to the console. The buffer is not flushed.
- `util::stob(s)`: a function to convert a string `s` to a boolean variable. Throws a `domain_error()` if `s` is not equal to "true", "false", "0", or "1".
- `util::equal(<floating-point> a, <floating-point> b, float eps = 0.001)`: a collection of overloads which return true if and only if |a-b| < eps. Arithmetic between different types of floating-point values (such as `long double a - float b`) has not been extensively tested. I plan to use `numeric_limits` to change the default value of `eps` to one which is machine-specific, but my knowledge of `numeric_limits` is still catching up.
