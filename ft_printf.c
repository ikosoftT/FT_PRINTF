/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:08:16 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/11/20 16:54:36 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conver(char f, va_list tracker)
{
	int	count;

	count = 0;
	if (f == 's')
		count += print_str(va_arg(tracker, char *));
	else if (f == 'c')
		count += print_char(va_arg(tracker, int));
	else if (f == 'd' || f == 'i')
		count += print_nums(va_arg(tracker, int));
	else if (f == 'u')
		count += print_unsigned(va_arg(tracker, unsigned int));
	else if (f == 'x' || f == 'X')
		count += print_hex(f, va_arg(tracker, unsigned int));
	else if (f == 'p')
		count += print_ptr(va_arg(tracker, void *));
	else if (f == '%')
		count += print_char(f);
	else
		return (-1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	tracker;
	int		count;
	int		i;
	int		x;

	if (!format || write(1, "", 0) == -1)
		return (-1);
	i = -1;
	count = 0;
	va_start(tracker, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			x = ft_conver(format[++i], tracker);
			if (count < 0)
				return (-1);
			count += x;
		}
		else
			count += print_char(format[i]);
	}
	va_end(tracker);
	return (count);
}
