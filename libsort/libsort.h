/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:25:28 by mmalie            #+#    #+#             */
/*   Updated: 2025/01/03 09:33:24 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSORT_H
# define LIBSORT_H

# include <stddef.h>

/* LIBSORT */
void	ft_bub_srt(int *arr, size_t size);
void	ft_sel_srt(int *arr, size_t size);
void	ft_ins_srt(int *arr, size_t size);
void	ft_mrg_srt(int *arr, size_t size);
void	ft_qck_srt(int *arr, size_t size);
void	ft_hep_srt(int *arr, size_t size);
void	ft_rdx_srt(int *arr, size_t size);
#endif
