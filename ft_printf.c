/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:31:13 by hbutt             #+#    #+#             */
/*   Updated: 2024/05/21 14:20:44 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	result;
	va_list	args;
	size_t	i;

	result = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 32 && format[i + 2] == '%')
				result = result + ft_format(args, '%');
			else
				result = result + ft_format(args, format[i + 1]);
			i++;
		}
		else
			result = result + ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (result);
}
