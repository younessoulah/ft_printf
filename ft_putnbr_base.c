/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:26:13 by youllah           #+#    #+#             */
/*   Updated: 2022/11/01 19:48:19 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(size_t nbr, char *base, int *num_printed)
{
	size_t	nb;
	size_t	len;

	nb = nbr;
	len = ft_strlen(base);
	if (nb < len)
		ft_putchar(base[nb], num_printed);
	else
	{
		ft_putnbr_base(nb / len, base, num_printed);
		ft_putnbr_base(nb % len, base, num_printed);
	}
}
