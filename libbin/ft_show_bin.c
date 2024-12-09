/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 08:43:01 by mmalie            #+#    #+#             */
/*   Updated: 2024/12/09 08:44:22 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
 * Displays the int num in binary notation.
 */
void	ft_show_bin(int num, unsigned int nb_of_bytes)
{
	unsigned int	size;
	
	size = sizeof(num) * 8;
	if (nb_of_bytes > size)
		nb_of_bytes = size ;
	while (nb_of_bytes > 0)
	{
		ft_printf("%d", (num >> nb_of_bytes) & 1);
		nb_of_bytes--;
	}
}
