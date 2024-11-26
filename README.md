# _printf  
![enter image description here](file:///C:/Users/herve/OneDrive/Documents/Sc%C3%A9nario%20Les%20enfants%20des%20dieux%20et%20des%20d%C3%A9mons/Carte%20Monde/Capture%20d'%C3%A9cran%202024-11-26%20094906.png) 
That is the prototype for this implementation(_printf). As you can see, this prototype is an implementation of the **printf standard function** and **variadic function** .  ## What is printf? "Writes the C string pointed by _format_ to the standard output ([stdout](http://www.cplusplus.com/stdout))" - [cplusplus](http://www.cplusplus.com/reference/cstdio/printf/) 

In other words, the function receives a format (*const char* **format*) and a list of arguments . So printf inside, take the string format and search for specific patterns, then the pattern that was found it is passed to other function that prints the match pattern  

### Patterns 

![enter image description here](https://i.imgur.com/vmU0FhC.png) 	
 [cplusplus](http://www.cplusplus.com/reference/cstdio/printf)  

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
|R|print_rot|print a string encoded in rot13 format| 


Authorized functions and macros
•	write (man 2 write)
•	malloc (man 3 malloc)
•	free (man 3 free)
•	va_start (man 3 va_start)
•	va_end (man 3 va_end)
•	va_copy (man 3 va_copy)
•	va_arg (man 3 va_arg)
Compilation
•	Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Prototype: 
int _printf(const char *format, ...);

Ubuntu 20.04 LTS

Lien github collaborateur https://github.com/Krosenvag
Lien github collaborateur https://github.com/Mathis-Bermond

