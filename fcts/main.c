/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamoutaf <pamoutaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:48:14 by pamoutaf          #+#    #+#             */
/*   Updated: 2021/10/19 13:04:22 by pamoutaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main()
{
	int	a;
	int b;
	a = ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	b = printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %u %u \n", ULONG_MAX, -ULONG_MAX);
	printf("%i %i \n", a, b);
	
	return 0;
}
