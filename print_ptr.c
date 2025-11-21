/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:27:25 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/11/18 15:54:53 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptrhex(unsigned long long nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_print_ptrhex(nb / 16);
	count += print_char(LOWER_BASE[nb % 16]);
	return (count);
}

int	print_ptr(void *add)
{
	unsigned long long	to_num;
	int					count;

	to_num = (unsigned long long)add;
	count = 0;
	if (!add)
		return (count + print_str("(nil)"));
	if (to_num)
	{
		count += print_char('0');
		count += print_char('x');
	}
	count += ft_print_ptrhex(to_num);
	return (count);
}
