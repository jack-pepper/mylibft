/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_to_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 08:43:01 by mmalie            #+#    #+#             */
/*   Updated: 2024/12/10 09:07:14 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
 * Displays the binary as an ASCII char.
 */
char	ft_bin_to_char(char binary[8])
{
	int	ascii_val;
	int	i;

	i = 0;
	while (i < 8)
	{
		if (binary[i] == '1')
		{
			ascii_val += (1 << (7 - i));
		}
		i++;
	}
	return ((char)c);
}
