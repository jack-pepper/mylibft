/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:07:27 by mmalie            #+#    #+#             */
/*   Updated: 2024/12/20 20:52:40 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	unsigned int	argv1_int;
	//int	argv2_int;
//	int	argv3_int;
	unsigned int	val;

	//int	new_bin;
//	char	bin_get[33];

	//new_bin = 0;
	argv1_int = 0;
//	val = 0;
	if (argc != 2)
	{
		ft_printf("Error: arguments invalid.");
	}
	else
	{
		argv1_int = (unsigned int)ft_atoi(argv[1]);
		//argv2_int = (int)ft_atoi(argv[2]);
//		argv3_int = ft_atoi(argv[3]);
//		val = (unsigned int)ft_atoi(argv[4]);
		//argv4_int = (unsigned int)ft_atoi(argv[4]);
		//argv3_int = ft_atoi(argv[3]);
		//new_bin = 1;
		ft_printf("Before operation: %d - ", argv1_int);
		ft_show_bin(argv1_int, 32);
		ft_printf("\n");
		//ft_get_bin(argv1_uint, bin_get);
		//ft_printf("\nGot bin: %s\n", bin_get);
		//new_bin = ft_set_bit(argv1_int, argv2_uint);
		//new_bin = ft_clear_bit(argv1_int, argv2_uint);
		//new_bin = ft_toggle_bit(argv1_int, argv2_uint);
		//new_bin = ft_is_bit_set(argv1_int, argv2_uint);
		//new_bin = ft_count_set_bits(argv1_int);
		//new_bin = ft_count_clear_bits(argv1_int);
		//new_bin = ft_first_set_bit_pos(argv1_int);
		//new_bin = ft_extract_bits(argv1_int);
		//new_bin = ft_count_clear_bits(argv1_int);
		//new_bin = ft_count_clear_bits(argv1_int);	
		//new_bin = ft_create_range_bitmask(argv1_int, argv2_int);		
//		argv1_int = ft_match_bits(argv1_int, argv2_int, argv3_int, val);
		//argv1_int = ft_rotate_right(argv1_int, argv2_int);
		val = ft_get_parity(argv1_int);
		ft_printf("\nAfter operation: %d - ", val);
		ft_show_bin(val, 32);
	}
	return (0);
}
