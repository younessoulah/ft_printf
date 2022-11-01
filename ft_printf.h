/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:09:26 by youllah           #+#    #+#             */
/*   Updated: 2022/11/01 15:06:15 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
void	ft_putchar(char c, int *num_printed);
void	ft_putstr(char *s, int *num_printed);
void	ft_putnbr(int nbr, char *base, int *num_printed);
void	ft_putnbr_base2(size_t nbr, char *base, int *num_printed);
int		ft_printf(const char *s, ...);
void	handeling(const char *s, va_list *ptr, int *num_printed);

#endif
