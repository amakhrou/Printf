/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:37:10 by amakhrou          #+#    #+#             */
/*   Updated: 2022/11/19 18:18:26 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_udecimal(unsigned int nb, int *co)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10, co);
		ft_putnbr(nb % 10, co);
	}
	else
		ft_putchar(nb + '0', co);
}
