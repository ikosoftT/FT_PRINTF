/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:13:46 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/11/18 15:48:51 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define UPPER_BASE "0123456789ABCDEF"

# define LOWER_BASE "0123456789abcdef"

int	print_hex(char f, unsigned int nb);
int	print_nums(long nb);
int	print_unsigned(unsigned int n);
int	print_ptr(void *ptr);
int	print_str(char *s);
int	print_char(char c);

int	ft_printf(const char *format, ...);

#endif
