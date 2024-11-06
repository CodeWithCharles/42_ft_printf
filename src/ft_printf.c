/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:55:25 by cpoulain          #+#    #+#             */
/*   Updated: 2024/11/06 15:47:41 by cpoulain         ###   ########.fr       */
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

}

// Static implementations

static void	init_printers(t_spec_printer *printers)
{
	printers[0] = _char_printer;
}
