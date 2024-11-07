/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:33:58 by cpoulain          #+#    #+#             */
/*   Updated: 2024/11/07 17:15:47 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	putnchar(char c, int count)
{
	while (count--)
		ft_putchar_fd(c, 1);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*str_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] -= ('a' + 'A');
		i++;
	}
	return (str);
}
