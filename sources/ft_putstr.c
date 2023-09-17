/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:18:50 by roglopes          #+#    #+#             */
/*   Updated: 2023/09/16 22:49:38 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	position;

	position = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[position] != '\0')
	{
		ft_putchar(str[position]);
		position++;
	}
	return (position);
}
