# Project Printf

That is the prototype for this implementation(_printf). As you can see, this prototype is an implementation of the **printf standard function** and **variadic function** .  ## What is printf? "Writes the C string pointed by _format_ to the standard output ([stdout](http://www.cplusplus.com/stdout))"

In other words, the function receives a format (*const char* **format*) and a list of arguments (the magic of variadic functions). So printf inside, take the string format and search for specific patterns, then the pattern that was found it is passed to other function that prints the match pattern  

## Flow Chart

![Flow chart png](https://github.com/Mathis-Bermond/holbertonschool-printf/blob/main/picture/Data%20structure%202.png?raw=true)

For more details of the [Flow Chart](https://www.canva.com/design/DAGX2OW6n64/D_jLrNu9vCjqP8Q7MZwRjA/edit?utm_content=DAGX2OW6n64&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton)

## Patterns 

![enter image description here](https://i.imgur.com/vmU0FhC.png) 	 

That image shows specifiers that we can use in the printf.  In this case, _printf just allow specifiers like

|Specifiers|Functions|Description| 
|--|--|--|
|s|print_string|print a string| 
|c|print_char|print just a char| 
|i|print_integer|print a number in base 10|
|d|print_integer|print a number in base 10|
|p|print_pointer|print a memory address in base 16 lowercase| 
|b|print_binary|print a number in base 2|
|x|print_hexadecimal_low|print a number in base 16 lowercase| 
|X|print_hexadecimal_upp|print a number in base 16 uppercase|
|o|print_octal|print a number in base 8| 
|%|print__percent|print '%'|
|R|print_rot|print a string encoded in rot13 format| 

## Authorized functions and macros

- write
- malloc
- free
- va_start
- va_end
- va_copy
- va_arg

## Compilation

Your code will be compiled this way:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

Prototype: 

`int _printf(const char *format, ...);`

OS version:

>Ubuntu 20.04 LTS

## Group Project

This project was a group project for a duration of a week, without any particular circumstantial, it was a really great working experience, we learned to manage git branch and the working process of a group work.

This project was a group projet in colaboration with [Krosenvag](https://github.com/Krosenvag)

![enter image description here](https://i.redd.it/ocz7g3ixkl211.jpg)

