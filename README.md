<div align = center>

# :clipboard: Printf | 42 SP

![42 São Paulo](https://img.shields.io/badge/42-SP-1E2952)
![License](https://img.shields.io/github/license/mendes-jv/libft?color=dark-green)
![Code size in bytes](https://img.shields.io/github/languages/code-size/mendes-jv/libft?color=dark-green)
![Top language](https://img.shields.io/github/languages/top/mendes-jv/libft?color=dark-green)
![Last commit](https://img.shields.io/github/last-commit/mendes-jv/libft?color=dark-green)

</div>

---

<div align = center>

![](https://game.42sp.org.br/static/assets/achievements/ft_printfe.png)

</div>

- Actual Status : finished.
- Result        : Approved with 105 points by moulinette (the 42 tester) ✅
  
  Prinft is the third project at 42.
The purpose of this project is to repeat the behavior of the printf function but we only deal with some cases.

#### We need to implement the following conversions:

• %c Prints a single character.  
• %s Prints a string (as defined by the common C convention).  
• %p The void * pointer argument has to be printed in hexadecimal format.  
• %d Prints a decimal (base 10) number.  
• %i Prints an integer in base 10.  
• %u Prints an unsigned decimal (base 10) number.  
• %x Prints a number in hexadecimal (base 16) lowercase format.  
• %X Prints a number in hexadecimal (base 16) uppercase format.  
• %% Prints a percent sign.  

## 📝 Functions

| Files | Description |
| :------: | :---------: |
| ``ft_printf.c`` | Contains the principal function: the function who deal with the type of data. Also contains the function who checks if is a conversion to deal with and the functions to deal with char or strings|
| ``ft_printf.h`` | The header with functions libraries and prototypes. |
| ``ft_putchar.c`` | Write sigle character. |
| ``ft_puthex.c`` | Prints a number in hexadecimal (base 16) lowercase and uppercase format. |
| ``ft_putnbr.c`` | Outputs the number interger. |
| ``ft_putptr.c`` | Outputs the pointer adress 'ptr' in the standard output. |
| ``ft_putstr.c`` | Goes through the entire array until '\0', if it does not exist, returns null. |
| ``Makefile`` | The automatizated compilator|


## 🛠️ Usage

In order to use this static library in your project, you must download this repository into your pc and compile the library

``` shell
$> git clone https://github.com/RogerioLS/Ft_Printf-42sp
$> cd Ft_Printf-42sp
$> make
```

In your code, simply include its header:

``` C
#include "libftprintf.h"
```
And, when compiling your code, add the required flags:

``` shell
$> make && cc -w -o your_file your_file.c -L./ -lftprintf && ./your_file
```