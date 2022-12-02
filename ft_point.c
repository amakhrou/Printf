/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:53:08 by amakhrou          #+#    #+#             */
/*   Updated: 2022/11/19 18:12:00 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_point_add(unsigned long nb, int *co)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(hex[nb % 16], co);
	else
	{
		ft_point_add(nb / 16, co);
		ft_point_add(nb % 16, co);
	}
}
