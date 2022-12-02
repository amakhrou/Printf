/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:24:31 by amakhrou          #+#    #+#             */
/*   Updated: 2022/11/19 18:14:36 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *co);
void	ft_putstr(char *s, int *co);
void	ft_putnbr(int n, int *co);
void	ft_putnbr_lowup(unsigned int nb, char s, int *co);
void	ft_putnbr_udecimal(unsigned int nb, int *co);
void	ft_point_add(unsigned long nb, int *co);
int		ft_printf(const char *form, ...);

#endif