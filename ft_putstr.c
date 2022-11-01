/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:37:18 by youllah           #+#    #+#             */
/*   Updated: 2022/10/31 22:48:19 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *num_printed)
{
	if (!s)
		s = "(null)";
	write (1, s, ft_strlen(s));
	*num_printed += ft_strlen(s);
}
