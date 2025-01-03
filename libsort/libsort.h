/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:25:28 by mmalie            #+#    #+#             */
/*   Updated: 2025/01/04 00:12:02 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSORT_H
# define LIBSORT_H

/* Utils */
void	ft_swap_ints(int *a, int *b);

/* LIBSORT */
//void	ft_bub_srt(int *arr, size_t size, char opt);
void	ft_sel_srt(int *arr, size_t size, char opt);
void	ft_bub_srt(int *arr, size_t size, char opt);
void	ft_mrg_srt(int *arr, size_t size);
void	ft_qck_srt(int *arr, size_t size);
void	ft_hep_srt(int *arr, size_t size);
void	ft_rdx_srt(int *arr, size_t size);

#endif
