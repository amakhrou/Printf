/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:12:35 by amakhrou          #+#    #+#             */
/*   Updated: 2022/11/19 18:22:25 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *co)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", co);
		return ;
	}
	while (s[i])
	{
		ft_putchar(s[i], co);
		i++;
	}
}
