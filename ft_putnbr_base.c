/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:44:39 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/17 20:02:10 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int	ft_putnbr_base(unsigned long	n, char *base)
{
	unsigned long	base_size;
	int				number_size;

	base_size = 0;
	number_size = 0;
	while (base[base_size])
		base_size++;
	if (n >= base_size)
	{
		number_size += ft_putnbr_base(n / base_size, base);
		number_size += ft_putnbr_base(n % base_size, base);
	}
	else
		number_size += write(1, base + n, 1);
	return (number_size);
}
