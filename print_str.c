/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:57:45 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/11/18 15:57:50 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (count + print_str("(null)"));
	while (*s)
		count += print_char(*s++);
	return (count);
}
