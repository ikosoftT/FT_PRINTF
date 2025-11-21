/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:33:59 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/11/18 15:50:29 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nums(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		print_char('-');
		n = -n;
		count++;
	}
	if (n >= 10)
		count += print_nums(n / 10);
	count += print_char(n % 10 + 48);
	return (count);
}
