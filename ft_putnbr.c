/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:30:17 by amakhrou          #+#    #+#             */
/*   Updated: 2022/11/19 18:18:15 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *co)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', co);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, co);
		ft_putnbr(nb % 10, co);
	}
	else
		ft_putchar(nb + '0', co);
}
