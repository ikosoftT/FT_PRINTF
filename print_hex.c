/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:51:04 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/11/18 15:56:52 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_base(unsigned int nb, const char *base)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_print_base(nb / 16, base);
	count += print_char(base[nb % 16]);
	return (count);
}

int	print_hex(char f, unsigned int nb)
{
	int	count;

	count = 0;
	if (f == 'x')
		count += ft_print_base(nb, LOWER_BASE);
	else if (f == 'X')
		count += ft_print_base(nb, UPPER_BASE);
	return (count);
}
