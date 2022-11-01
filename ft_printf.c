/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:05:54 by youllah           #+#    #+#             */
/*   Updated: 2022/11/01 19:19:40 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		num_printed;

	num_printed = 0;
	va_start (ptr, s);
	while (*s)
	{
		if (*s == '%' && s[1])
		{
			s++;
			handeling(s, &ptr, &num_printed);
		}
		else if (*s != '%')
			ft_putchar(*s, &num_printed);
		s++;
	}
	va_end (ptr);
	return (num_printed);
}
