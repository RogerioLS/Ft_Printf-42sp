/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:25:37 by roglopes          #+#    #+#             */
/*   Updated: 2023/09/14 21:28:00 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsign(unsigned int nbr)
{
	int	count;

	count = 1;
	if (nbr >= 10)
		count += ft_putnbr(nbr / 10);
	ft_putchar("0123456789"[nbr % 10]);
	return (count);
}
