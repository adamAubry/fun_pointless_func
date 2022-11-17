/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:27:44 by adam              #+#    #+#             */
/*   Updated: 2022/11/17 16:55:36 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("nombre d'arguments inadequat.\n");
		return (0);
	}
	longueur = atoi(av[1]);
	largeur = atoi(av[2]);

	write(1, (hex_converter(longueur)), 2);
	write(1, "\n", 1);
	write(1, (hex_converter(largeur)), 2);		
	
	// reste a faire dans la todo

	return (0);
}
