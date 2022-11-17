/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_converter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:21:00 by adam              #+#    #+#             */
/*   Updated: 2022/11/17 16:46:04 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"

char	*hex_converter(int nbr)
{
	char	table[16] = "0123456789ABCDEF";
	char	res[2];
	char	*ptr;
	int	i;
	int	tmp;

	if (nbr > 255)
	{
		printf("\nerreur: nombre trop grand\n");
		return ("a");
	}
	i = nbr % 16;
	tmp = nbr / 16;
	ptr = res;
	res[0] = table[i];
	res[1] = table[tmp % 16];
	return (ptr);
}
