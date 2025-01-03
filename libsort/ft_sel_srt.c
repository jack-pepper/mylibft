/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sel_srt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 22:45:21 by mmalie            #+#    #+#             */
/*   Updated: 2025/01/03 14:35:53 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
 * SELECTION SORT works by selecting the smallest (or largest) element and
 * swapping it into its correct position in each iteration.
 *
 * STEPS:
 * - Find the smallest element and swap it with the first element. 
 * - Find the smallest among remaining elements (second smallest).
 * - Continue until all elements are moved to correct position.
 */

void	ft_sel_srt(int *arr, size_t size)
{
	size_t	i;
	size_t	j;

	if (size <= 1)
		return ;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[j] < arr[i])
			{
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[i] ^ arr[j];
				arr[i] = arr[i] ^ arr[j];
			}
			j++;
		}
		i++;
	}
	return ;
}
