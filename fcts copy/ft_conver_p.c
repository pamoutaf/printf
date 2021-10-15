/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:37:21 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/10/15 12:18:43 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned long n)
{
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16);
		ft_putnbr_hex(n % 16);
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
		ft_putchar(n + 'W');
}

void	ft_putnbr_hex_up(unsigned long n)
{
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16);
		ft_putnbr_hex(n % 16);
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
		ft_putchar(n + '7');
}

int	ft_conversion_x_up(va_list params)
{
	int		len;
	int		current;
	char	*str;

	current = va_arg(params, unsigned int);
	len = ft_len_hex(current);
	ft_putnbr_hex_up(current);
	return (len);
}
int	ft_conversion_x_low(va_list params)
{
	int		len;
	int		current;
	char	*str;

	current = va_arg(params, unsigned int);
	len = ft_len_hex(current);
	ft_putnbr_hex(current);
	return (len);
}

int	ft_conversion_p(va_list params)
{
	size_t	current;
	int		len;
	char 	*temp;

	current = va_arg(params, size_t);
	ft_putstr("0x");
	ft_putnbr_hex(current);
	len = ft_nbrlen(current) + 2;
	return (len);
}
