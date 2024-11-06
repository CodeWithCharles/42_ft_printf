/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:55:25 by cpoulain          #+#    #+#             */
/*   Updated: 2024/11/06 16:43:47 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

// Declare static functions

static void	init_printers(t_spec_printer *printers);

// Main function

int	ft_printf(const	char *format_in, ...)
{
	va_list			args;
	int				printed_char;
	t_spec_printer	printers[8];

	printed_char = 0;
	va_start(args, format_in);
	init_printers(printers);
	while (*format_in)
	{
		if (*format_in++ != '%')
		{
			++length;
			ft_putchar_fd(fmt[-1], 1);
			continue ;
		}
		length += handle(&fmt, &args, printers);
	}
	va_end(args);
	return (length);
}

// Static implementations

static void	init_printers(t_spec_printer *printers)
{
	printers[0] = _char_printer;
}
