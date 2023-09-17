/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:13:42 by roglopes          #+#    #+#             */
/*   Updated: 2023/09/17 18:42:33 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

/**
 * @brief Repeat the behavior of the printf fuction
 * 
 * @param format the format of conversion to do and all arguments passed
 * @return the amount of bytes that were written
*/
int		ft_printf(const char *c, ...);

/**
 * @brief Write sigle character.
 * 
 * @param char c.
 * @return sigle character.
*/
int		ft_putchar(char c);

/**
 * @brief Goes through the entire array until '\0', if
 * it does not exist, returns null.
 * 
 * @param pointer char *str.
 * @return the amount of bytes that were written.
*/
int		ft_putstr(char *str);

/**
 * @brief Outputs the pointer adress 'ptr' in the standard output.
 * 
 * @param ptr the integer to output
 * @param i 
 * @return the amount of bytes that were written
*/
char	ft_putptr(unsigned long nbr, int i);

/**
 * @brief Outputs the number interger.
 * 
 * @param int the number integer of input.
 * @return the amount of bytes that were written.
*/
int		ft_putnbr(int number);

/**
 * @brief Outputs the hexadecimal integer 'nbr' in the standard output.
 * 
 * @param unsigned int of output.
 * @return the amount of bytes that were written.
*/
int		ft_putunsign(unsigned int nbr);

/**
 * @brief Prints a number in hexadecimal (base 16) lowercase format.
 * 
 * @param unsigned int input
 * @return the amount of bytes that were written.
*/
int		ft_puthex_low(unsigned int n);

/**
 * @brief Prints a number in hexadecimal (base 16) uppercase format.
 * 
 * @param unsigned int input
 * @return the amount of bytes that were written.
*/
int		ft_puthex_upper(unsigned int n);

#endif