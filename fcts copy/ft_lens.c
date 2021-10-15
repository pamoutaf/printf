/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lens.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:17:58 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/10/14 15:10:46 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_hex(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		i++;
		nbr /= 16;
	}
	return (i);
}

int	ft_nbrlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
