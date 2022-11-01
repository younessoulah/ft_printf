/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:59:25 by youllah           #+#    #+#             */
/*   Updated: 2022/11/01 14:39:38 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, char *base, int *num_printed)
{
	long	nb;
	int		len;

	nb = nbr;
	len = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-', num_printed);
		nb *= -1;
	}
	if (nb < len)
		ft_putchar(base[nb], num_printed);
	else
	{
		ft_putnbr(nb / len, base, num_printed);
		ft_putnbr(nb % len, base, num_printed);
	}
}
