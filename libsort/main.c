/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:01:49 by mmalie            #+#    #+#             */
/*   Updated: 2025/01/03 10:53:17 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "libsort.h"

int	main(int argc, char **argv)
{	
	if (argc > 2)
	{	
		size_t	nb_elem = argc - 1;	
		int	arr[nb_elem];
		size_t	i = 0;
		while (i < nb_elem)
		{
			arr[i] = ft_atoi(argv[i + 1]);
			i++;
		}
		i = 0;
		ft_printf("Before sort: ");
		while (i < nb_elem)
		{
			ft_printf("%d ", arr[i]);
			i++;
		}
		i = 0;
		ft_printf("\nAfter sort: ");
		ft_sel_srt(arr, nb_elem);
		while (i < nb_elem)
		{
			ft_printf("%d ", arr[i]);
			i++;
		}	
	}
}
