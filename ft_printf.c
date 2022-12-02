/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:32:54 by amakhrou          #+#    #+#             */
/*   Updated: 2022/11/19 18:13:07 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(va_list arg, char s, int *co)
{
	if (s == 'c')
		ft_putchar(va_arg(arg, int), co);
	else if (s == 's')
		ft_putstr(va_arg(arg, char *), co);
	else if (s == 'p')
	{
		ft_putstr("0x", co);
		ft_point_add(va_arg(arg, unsigned long), co);
	}
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(arg, int), co);
	else if (s == 'u')
		ft_putnbr_udecimal(va_arg(arg, unsigned int), co);
	else if (s == 'x' || s == 'X')
		ft_putnbr_lowup(va_arg(arg, unsigned int), s, co);
	else if (s == '%')
		ft_putchar('%', co);
}

int	ft_printf(const char *form, ...)
{
	va_list	arg;
	int		l;
	int		i;

	i = 0;
	l = 0;
	va_start(arg, form);
	while (form[i])
	{
		if (form[i] == '%')
		{
			i++;
			ft_check(arg, form[i], &l);
		}
		else
			ft_putchar(form[i], &l);
		i++;
	}
	va_end(arg);
	return (l);
}
