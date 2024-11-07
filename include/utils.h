/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:58:33 by cpoulain          #+#    #+#             */
/*   Updated: 2024/11/07 16:22:42 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "libft.h"
# include <stdarg.h>

// Define flags' binary values

# define FMT_FLAG__LEFT_JUSTIFY 0b000001
# define FMT_FLAG__FORCE_SIGN 0b000010
# define FMT_FLAG__ALIGN_SIGN 0b000100
# define FMT_FLAG__HEX_PREFIX 0b001000
# define FMT_FLAG__ZERO_PADDING 0b010000
# define FMT_FLAG__PRECISION 0b100000

// Define string to list all specifiers and flags

# define FMT_SPECIFIERS "cspdiuxX%"
# define FMT_FLAGS "-+ #0"

typedef struct s_format
{
	int		width;
	int		precision;
	char	flags;
	char	specifier;
}	t_format;

// Define type for specifier printer functions

typedef int	(*t_spec_printer)(va_list *, t_format *);

// Define flag checking functions

int		format_flag_has_left_justify(t_format *fmt);
int		format_flag_has_forge_sign(t_format *fmt);
int		format_flag_has_align_sign(t_format *fmt);
int		format_flag_has_hex_prefix(t_format *fmt);
int		format_flag_has_zero_padding(t_format *fmt);
int		format_flag_has_precision(t_format *fmt);

// Define printer functions

int		_char_printer(va_list *arg_list, t_format *fmt);

// Utils functions

void	putnchar(char c, int count);
int		max(int a, int b);
int		min(int a, int b);

#endif
