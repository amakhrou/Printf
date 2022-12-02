/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:58:36 by amakhrou          #+#    #+#             */
/*   Updated: 2022/11/19 18:11:27 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_lowup(unsigned int nb, char s, int *co)
{
	char	*hex;

	if (s == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar(hex[nb % 16], co);
	else
	{
		ft_putnbr_lowup(nb / 16, s, co);
		ft_putnbr_lowup(nb % 16, s, co);
	}
}
