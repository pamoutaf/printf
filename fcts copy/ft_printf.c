/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:55:21 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/10/15 12:30:32 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert(const char *str, va_list params, int i)
{	
	if (str[i] == 'i' || str[i] == 'd')
		return (ft_conversion_id(params));
	else if (str[i] == 's')
		return (ft_conversion_s(params));
	else if (str[i] == '%')
		write(1, "%", 1);
	else if (str[i] == 'c')
	{
		printf("coucoutest\n");
		return (ft_conversion_c(params));
	}
	else if (str[i] == 'u')
		return (ft_conversion_u(params));
	else if (str[i] == 'x')
		return (ft_conversion_x_low(params));
	else if (str[i] == 'X')
		return (ft_conversion_x_up(params));
	else if (str[i] == 'p')
		return(ft_conversion_p(params));
	return (0);
}

int		ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	params;

	len = 0;
	i = 0;
	va_start(params, str);
	if (!str[i])
		ft_putstr("null");
	while (str[i])
	{
		if (str[i] != '%')
			{
				write(1, &str[i], 1);
				len++;
			}
		if (str[i] == '%')
		{
			len = len + ft_convert(str, params, i + 1);
			i++;
		}
		i++;
	}
	va_end(params);
	return (len);
}
