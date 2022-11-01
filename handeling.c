/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handeling.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:53:28 by youllah           #+#    #+#             */
/*   Updated: 2022/11/01 19:44:31 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handeling(const char *s, va_list *ptr, int *num_printed)
{
	if (*s == 'c')
		ft_putchar(va_arg(*ptr, int), num_printed);
	else if (*s == '%')
		ft_putchar('%', num_printed);
	else if (*s == 's')
		ft_putstr(va_arg(*ptr, char *), num_printed);
	else if (*s == 'p')
	{
		ft_putstr("0x", num_printed);
		ft_putnbr_base((size_t)va_arg(*ptr, void *),
			"0123456789abcdef", num_printed);
	}
	else if (*s == 'd' || *s == 'i')
		ft_putnbr(va_arg(*ptr, int),
			"0123456789", num_printed);
	else if (*s == 'u')
		ft_putnbr_base(va_arg(*ptr, unsigned int),
			"0123456789", num_printed);
	else if (*s == 'x')
		ft_putnbr_base(va_arg(*ptr, unsigned int),
			"0123456789abcdef", num_printed);
	else if (*s == 'X')
		ft_putnbr_base(va_arg(*ptr, unsigned int),
			"0123456789ABCDEF", num_printed);
}
