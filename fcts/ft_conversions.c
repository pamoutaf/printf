/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:15:56 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/10/18 12:00:29 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_conversion_id(va_list params)
{
	int		len;
	int		current;

	current = va_arg(params, int);
	len = ft_nbrlen(current);
	ft_putnbr(current);
	return (len);
}

char	ft_conversion_s(va_list params)
{
	int		i;
	void	*current;

	current = va_arg(params, char *);
	i = 0;
	ft_putstr(current);
	return (ft_strlen(current));
}

char	ft_conversion_c(va_list params)
{
	int		len;
	char	current;

	current = va_arg(params, int);
	ft_putchar(current);
	return (1);
}

int	ft_conversion_u(va_list params)
{
	unsigned long	current;
	int				len;

	current = va_arg(params, unsigned long);
	len = ft_nbrlen(current);
	ft_putnbr(current);
	return (len);
}

