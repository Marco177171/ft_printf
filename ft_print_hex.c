/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:17:54 by masebast          #+#    #+#             */
/*   Updated: 2022/02/09 18:41:14 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar_fd((num + '0'), 1);
		}
		else
		{
			if (format == 'x')
			{
				ft_putchar_fd((num - 10 + 'a'), 1);
			}
			if (format == 'X')
			{
				ft_putchar_fd((num - 10 + 'A'), 1);
			}
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
	{
		return (write(1, "0", 1));
	}
	else
	{
		ft_put_hex(num, format);
	}
	return (ft_hex_len(num));
}
