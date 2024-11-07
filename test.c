/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:56:57 by cpoulain          #+#    #+#             */
/*   Updated: 2024/11/07 16:26:25 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/printf.h"
#include <assert.h>
#include <unistd.h>

int	main(void)
{
	ft_printf("%c\n%c\n%c", 'o', 'k', 'a') == 5 ? write(1, "OK", 2) : write(1, "NOK", 3);
}
