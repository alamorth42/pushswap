/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 06:48:05 by alamorth          #+#    #+#             */
/*   Updated: 2019/02/11 14:50:32 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

int			ft_get_len(int *tab);
int			ft_get_index_med(int *tab);
void			swap(int *tab);
void			rotate(int *tab);
void			rev_rotate(int *tab);
void		push(int *tab1, int*tab2, int index1, int index2);
int		resolution(int *tab1, int *tab2);
int		finish(int *tab1, int *tab2);
#endif
