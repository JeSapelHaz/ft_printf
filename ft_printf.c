/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:31:13 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/28 20:52:46 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char* format, ...)
{
	size_t result;
	va_list args;

	va_start(args, format);
	
	va_end(args);
	return result;
}