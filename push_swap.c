/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 06:16:47 by alamorth          #+#    #+#             */
/*   Updated: 2019/02/11 14:55:22 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_get_len(int *tab)
{
	return (sizeof(tab) - sizeof(tab[0]) + 1);
}

int			ft_get_index_med(int *tab)
{
	int			index;

	index = 0;
	while (tab[index])
		index++;
	if (index % 2 == 0)
		index = index / 2 - 1;
	else
		index = index / 2;
	return (index);
}

void			swap(int *tab)
{
	int			i;
	int			cpy;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	cpy = tab[i - 1];
	tab[i - 1] = tab[i - 2];
	tab[i - 2] = cpy;
}

void			rotate(int *tab)
{
	int			i;
	int			*tmp;
	int			cpy;
	int			j;

	j = 0;
	while (tab[j])
	{
		j++;
	}
	i = j;
	j = 0;
	if (!(tmp = malloc(sizeof(int) * (i))))
		return ;
	cpy = tab[i - 1];
	while (j < i)
	{
		tmp[j + 1] = tab[j];
		j++;
	}
	tmp[j] = '\0';
	tmp[0] = cpy;
	j = 0;
	while (tmp[j])
	{
		tab[j] = tmp[j];
		j++;
	}
	tab[j] = '\0';
	free(tmp);
}

void			rev_rotate(int *tab)
{
	int			i;
	int			*tmp;
	int			cpy;
	int			j;

	j = 0;
	while (tab[j])
	{
		j++;
	}
	i = j;
	j = 0;
	if (!(tmp = malloc(sizeof(int) * i)))
		return ;
	cpy = tab[0];
	while (j < i - 1)
	{
		tmp[j] = tab[j + 1];
		j++;
	}
	tmp[j] = cpy;
	j = 0;
	while (tmp[j])
	{
		tab[j] = tmp[j];
		j++;
	}
	tab[j] = '\0';
	free(tmp);
}

void		push(int *tab1, int *tab2, int index1, int index2)
{
	tab2[index2] = tab1[index1];
	tab1[index1] = '\0';
	tab2[index2 + 1] = '\0';
}
