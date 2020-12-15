# libft
## About
This project gave me the opportunity to rewrite some of the functions of the standard C library.<br/>
___
**My functions represent the same prototype and behavior as the originals. The library contains the following standard library functions:**
```
• memset          • bzero
• memcpy          • memccpy
• memmove         • memchr
• memcmp          • strlen
• strlcpy         • strlcat
• strchr          • strrchr
• strnstr         • strncmp
• atoi            • isalpha
• isdigit         • isalnum
• isascii         • isprint
• toupper         • tolower
• calloc          • strdup
```
___
**The library also contains the following additional functions:**<br/>
___
### substr
***Prototype***
```C
char *ft_substr(char const *s, unsigned int start, size_t len);
```
***Parameters***<br/>
#1. The string from which to create the substring.<br/>
#2. The start index of the substring in the string `s`.<br/>
#3. The maximum length of the substring.<br/>

***Return value***<br/>
The substring. `NULL` if the allocation fails.<br/>

***Description***<br/>
Allocates (with malloc(3)) and returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`.
______
### strjoin
***Prototype***
```C
char *ft_strjoin(char const *s1, char const *s2);
```
***Parameters***<br/>
#1. The prefix string.<br/>
#2. The suffix string.<br/>

***Return value***<br/>
The new string. `NULL` if the allocation fails.<br/>

***Description***<br/>
Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of `s1` and `s2`.
___
### strtrim
***Prototype***
```C
char *ft_strtrim(char const *s1, char const *set);
```
***Parameters***<br/>
#1. The string to be trimmed.<br/>
#2. The reference set of characters to trim.<br/>

***Return value***<br/>
The trimmed string. `NULL` if the allocation fails.<br/>

***Description***<br/>
Allocates (with malloc(3)) and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.
___
### split
***Prototype***
```C
char **ft_split(char const *s, char c);
```
***Parameters***<br/>
#1. The string to be split.<br/>
#2. The delimiter character.<br/>

***Return value***<br/>
The array of new strings resulting from the split. `NULL` if the allocation fails.<br/>

***Description***<br/>
Allocates (with malloc(3)) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array must be ended by a `NULL` pointer.
___
### itoa
***Prototype***
```C
char *ft_itoa(int n);
```
***Parameters***<br/>
#1. the integer to convert.<br/>

***Return value***<br/>
The string representing the integer. `NULL` if the allocation fails.<br/>

***Description***<br/>
Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
___
### strmapi
***Prototype***
```C
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
***Parameters***<br/>
#1. The string on which to iterate.<br/>
#2. The function to apply to each character.<br/>

***Return value***<br/>
The string created from the successive applications of ’f’. Returns `NULL` if the allocation fails.<br/>

***Description***<br/>
Applies the function `f` to each character of the string `s` to create a new string (with malloc(3)) resulting from successive applications of `f`.
___
### putchar_fd
***Prototype***
```C
void ft_putchar_fd(char c, int fd);
```
***Parameters***<br/>
#1. The character to output.<br/>
#2. The file descriptor on which to write.<br/>

***Description***<br/>
Outputs the character `c` to the given file descriptor.
___
### putstr_fd
***Prototype***
```C
void ft_putstr_fd(char *s, int fd);
```
***Parameters***<br/>
#1. The string to output.<br/>
#2. The file descriptor on which to write.<br/>

***Description***<br/>
Outputs the string `s` to the given file descriptor.
___
### putendl_fd
***Prototype***
```C
void ft_putendl_fd(char *s, int fd);
```
***Parameters***<br/>
#1. The string to output.<br/>
#2. The file descriptor on which to write.<br/>

***Description***<br/>
Outputs the string `s` to the given file descriptor, followed by a newline.
___
### putnbr_fd
***Prototype***
```C
void ft_putnbr_fd(int n, int fd);
```
***Parameters***<br/>
#1. The integer to output.<br/>
#2. The file descriptor on which to write.<br/>

***Description***<br/>
Outputs the integer `n` to the given file descriptor.
___
