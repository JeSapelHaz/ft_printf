/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:54:57 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/28 21:33:17 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* cspdiuxX% 
	c : char
	s : string
	p : pointeur
	d / i : decimal signe
	u : decimal non signe
	x : hexadecimal <abcdef>
	X : hexadecimal <ABCDEF>
	% : '%'
	*/
size_t	ft_format(va_list args, char c)
{
	size_t result;

	result = 0;
	if (c == 'c')
		result = result + ft_putchar(va_arg(args, int));
	if (c == 's')
		result = result + 
	if (c == 'd')
		result = result + 
	if (c == '%')
		result = result + ft_putchar('%');
	if (c == 'p')
		result = result + 
	if (c == 'u')
		result = result + 
	if (c == 'x')
		result = result + 
	if (c == 'X')
		result = result +
	return (result);
}

size_t	ft_putnbr(long int nbr)
{
	size_t result;

	result = 0;
	if (nbr < 0)
	{
		result = result + ft_putchar('-');
		result = result * -1;
	}
	if (nbr > 9)
	{
		result = result + ft_putnbr(nbr/10);
		result = result + ft_putnbr(nbr%10)
	}
}

size_t ft_putnbr_base(unsigned long int nbr, const char *base)
{
	
}